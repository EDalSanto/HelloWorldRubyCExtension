
lib = File.expand_path("../lib", __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require "hello_world_ruby_c_extension/version"

Gem::Specification.new do |spec|
  spec.name          = "hello_world_ruby_c_extension"
  spec.version       = HelloWorldRubyCExtension::VERSION
  spec.authors       = ["Edward Dal Santo"]
  spec.email         = ["edalsanto@doximity.com"]
  spec.summary       = "Ruby with C extension"

  spec.license       = "MIT"

  spec.files         = `git ls-files -z`.split("\x0").reject do |f|
    f.match(%r{^(test|spec|features)/})
  end
  spec.bindir        = "exe"
  spec.executables   = spec.files.grep(%r{^exe/}) { |f| File.basename(f) }
  spec.require_paths = ["lib"]

  spec.add_development_dependency "bundler", "~> 1.16"
  spec.add_development_dependency "rake", "~> 10.0"
  spec.add_development_dependency "rspec", "~> 3.0"
  spec.add_development_dependency "ffi"
end
