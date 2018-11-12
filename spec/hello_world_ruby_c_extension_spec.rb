RSpec.describe HelloWorldRubyCExtension do
  it "has a version number" do
    expect(HelloWorldRubyCExtension::VERSION).not_to be nil
  end

  it "has a hello world interface that returns hello world" do
    expect(HelloWorldRubyCExtension.new.hello_world).to eq("hello world")
  end
end