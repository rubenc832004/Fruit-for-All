class Fruit
  def initialize(name)
    @name = name
  end

  def name
    @name
  end

  def get_fruit
    puts "You have a #{name} in your hand!"
  end

end

class Apple < Fruit
  def bites
    puts "Yummy, this #{name} is so juicy!"
  end
end

class Orange < Fruit
  def peels
    puts "Taste the sweet and sour taste of #{name}!"
  end
end

class Tomato < Fruit
  def mashes
    puts "This #{name} is great for making sauces!"
  end
end

# Create instances of the Fruit class
apple = Fruit.new("apple")
orange = Fruit.new("orange")
tomato = Fruit.new("tomato")

# Create instances of the Apple class
granny_smith = Apple.new("Granny Smith")
red_delicious = Apple.new("Red Delicious")

# Create instances of the Orange class
clementine = Orange.new("Clementine")
navel_orange = Orange.new("Navel Orange")

# Create instance of the Tomato class
roma = Tomato.new("Roma")

# Call the methods on the objects
apple.get_fruit
granny_smith.bites

orange.get_fruit
clementine.peels

tomato.get_fruit
roma.mashes