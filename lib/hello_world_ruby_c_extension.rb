require "./hello_world_ruby_c_extension"

module HelloWorldRubyCExtension
  def self.text
    HelloWorldC.text
  end
end
