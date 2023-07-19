-- 'Fruit for All' --

-- Declare globals
local fruitTable = {}
local fruitList = {}

-- Declare functions
local function newFruit(name, color)
	table.insert(fruitTable, {name = name, color = color})
end

local function addAllFruit()
	for key, value in ipairs(fruitTable) do
		table.insert(fruitList, value)
	end
end

local function getFruitColor(name)
	for key, value in ipairs(fruitTable) do
		if value.name == name then
			return value.color
		end
	end
end

local function listFruit()
	for key, value in ipairs(fruitList) do
		print("Name: " .. value.name .. " - Color: " .. value.color)
	end
end

-- Define Fruit
newFruit("Apple", "Green")
newFruit("Banana", "Yellow")
newFruit("Grape", "Purple")

addAllFruit()

-- Print out Fruit List
listFruit()

-- Get the Color of an Apple
print("The color of an Apple is: " .. getFruitColor("Apple"))