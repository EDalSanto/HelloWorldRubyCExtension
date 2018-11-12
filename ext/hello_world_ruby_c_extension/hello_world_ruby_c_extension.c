# include <ruby.h>
# include <string.h>

/*
 * implementation of method -> return new ruby string using function supplied by ruby interpreter
*/

VALUE hello_world_text() {
  return rb_str_new2("hello world");
}

/*
 * implementation of method -> find length in C then convert to Ruby num value
*/
VALUE hello_world_length() {
  int length = strlen("hello world");
  VALUE ruby_length = INT2NUM(length);
  return ruby_length;
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
}
