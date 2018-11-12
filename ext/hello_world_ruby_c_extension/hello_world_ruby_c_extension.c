# include <ruby.h>

/* Initial setup function */
void Init_hello_world_ruby_c_extensions() {
  /*
   * define new Ruby class
   * args: new class name and super
   *
  */
  VALUE HelloWorldRubyCExtension = rb_define_class("HelloWorldRubyCExtension", rb_cObject);
  /*
   * define instance method hello world
   * args: ruby class we created, name of method, implementaion of method, num args besides self to method
  */
  rb_define_method(HelloWorldRubyCExtension, "hello_world", hello_world, 0);

  /*
   * implementation of method -> just return string literal of hello world
   * TODO: avoiding issue of garbage collection for now if mallocing
   * TODO: convert to ruby object
  */
  const char *hello_world() {
    return "hello world";
  }
}
