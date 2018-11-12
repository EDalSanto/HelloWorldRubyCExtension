RSpec.describe HelloWorldRubyCExtension do
  describe ".text" do
    it "returns hello world" do
      expect(HelloWorldRubyCExtension.text).to eq("hello world")
    end
  end

  describe ".length" do
    it "returns hello world" do
      expect(HelloWorldRubyCExtension.length).to eq(11)
    end
  end
end
