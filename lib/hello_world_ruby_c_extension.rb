require "./hello_world_ruby_c_extension"

module HelloWorldRubyCExtension
  def self.text
    HelloWorldC.text
  end

  def self.length
    HelloWorldC.length
  end

  def self.hello_world?(str)
    HelloWorldC.hello_world?(str)
  end
end
