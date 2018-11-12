# include <ruby.h>

/*
 * implementation of method -> just return string literal of hello world
*/

VALUE hello_world_text() {
  return rb_str_new2("hello world");
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
}
