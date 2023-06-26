-- Fruit For All --

-- Setup --
local fruits = {}

-- Core functions --

-- getFruit
-- Gets a fruit from the array
--
-- Returns: 
--  A string representing a fruit
function getFruit()
    local index = math.random(1, #fruits)
    return fruits[index]
end

-- addFruit
-- Adds a fruit to the array
--
-- Args:
--  fruit: a string representing a fruit
function addFruit(fruit)
    fruits[#fruits + 1] = fruit
end

-- getFruitCount
-- Gets the total number of fruits in the array
--
-- Returns: 
--  An integer representing the number of fruits
function getFruitCount()
    return #fruits
end

-- main
-- The main program of the Fruit For All
--
-- Args:
--  args: command line arguments
function main(args)
    -- Add fruits
    addFruit('Apple')
    addFruit('Banana')
    addFruit('Orange')
    addFruit('Grape')
    addFruit('Strawberry')
    
    -- List out the fruits
    print('Fruits:')
    for i, fruit in ipairs(fruits) do
        print(i, fruit)
    end

    -- Pick a random fruit
    print('Random fruit: ' .. getFruit())
    
    -- Get the total number of fruits
    print('Total number of fruits: ' .. getFruitCount())
end

-- Call the main function
main({})