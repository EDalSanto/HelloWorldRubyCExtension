# include <ruby.h>
# include <string.h>
# include <stdio.h>

/*
 * implementation -> return new ruby string using function supplied by ruby interpreter
*/

VALUE hello_world_text() {
  return rb_str_new2("hello world");
}

/*
 * implementation -> find length in C then convert to Ruby num value
 * make use of INT2NUM macro in ruby.h
*/
VALUE hello_world_length() {
  int length = strlen("hello world");
  VALUE ruby_length = INT2NUM(length);
  return ruby_length;
}

/*
 * implementation -> example of paramters being parsed from Ruby to C land
 * make use of rb_str_equal from ruby.h / string.h
*/
VALUE is_hello_world(VALUE self, VALUE rb_str) {
  return rb_str_equal(hello_world_text(), rb_str);
}

/* Initial setup function */
void Init_hello_world_ruby_c_extension() {
  /*
   * define new Ruby class
   * args: new class name and super
   *
  */
  VALUE HelloWorldC = rb_define_class("HelloWorldC", rb_cObject);
  /*
   * define instance method hello world
   * args: ruby class we created, name of method, implementaion of method, num args besides self to method
  */
  rb_define_singleton_method(HelloWorldC, "text", hello_world_text, 0);
  rb_define_singleton_method(HelloWorldC, "length", hello_world_length, 0);
  // specify one paramter to method besides self
  rb_define_singleton_method(HelloWorldC, "hello_world?", is_hello_world, 1);
}
