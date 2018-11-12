require "mkmf"

# exit with errors if extension missing necessary functions
abort "missing new()" unless have_func "new"
abort "missing hello_world()" unless have_func "hello_world"

# generate a Makefile which will correctly compile and link the C extension to ruby and a third-party library
create_makefile "hello_world_ruby_c_extension/hello_world_ruby_c_extension"
