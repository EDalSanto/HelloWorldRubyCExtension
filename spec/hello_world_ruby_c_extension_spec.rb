RSpec.describe HelloWorldRubyCExtension do
  describe ".text" do
    it "returns hello world" do
      expect(HelloWorldRubyCExtension.text).to eq("hello world")
    end
  end

  describe ".length" do
    it "returns 'hello world' string length" do
      expect(HelloWorldRubyCExtension.length).to eq(11)
    end
  end

  describe ".hello_world?" do
    it "returns true if input is hello world" do
      expect(HelloWorldRubyCExtension.hello_world?("hello world")).to eq(true)
    end

    it "returns false if input is not hello world" do
      expect(HelloWorldRubyCExtension.hello_world?("goodbye world")).to eq(false)
    end
  end
end
