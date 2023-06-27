//Define fruit array
var fruits = ['apple', 'banana', 'pear', 'orange', 'melon'];

//Create function to loop through array
function loopThroughFruits(array) {
  for (var i = 0; i < array.length; i++) {
    console.log(array[i]);
  }
}

//Define function to add a fruit to array
function addFruit(array, fruit) {
  array.push(fruit);
}

//Define function to remove a fruit from array
function removeFruit(array, index) {
  array.splice(index, 1);
}

//Define function to sort fruits
function sortFruits(array) {
  return array.sort();
}

//Define function to display fruits
function displayFruits(array) {
  loopThroughFruits(array);
}

//Define function to clear fruit array
function clearFruits(array) {
  array.length = 0;
}

//Define function to randomize order of fruits
function randomizeFruits(array) {
  for (let i = array.length - 1; i > 0; i--){
  	let j = Math.floor(Math.random() * (i + 1));
  	[array[i], array[j]] = [array[j], array[i]];
  }
}

//Define function to search fruits array for a specific fruit
function searchFruits(array, fruit) {
  for (let i = 0; i < array.length; i++) {
  	if (array[i] === fruit) {
  		console.log('Fruit found');
  		return true;
  	}
  }
  console.log('Fruit not found');
  return false;
}

//Define function to call other functions depending on users input
function runFruitProgram(input) {
  if (input.toLowerCase() === 'add') {
  	let addFruitInput = prompt('What fruit would you like to add?');
  	addFruit(fruits, addFruitInput);
  	console.log('Fruit added');
  } else if (input.toLowerCase() === 'remove') {
  	let removeFruitInput = prompt('What fruit would you like to remove?');
  	let index = fruits.indexOf(removeFruitInput);
  	removeFruit(fruits, index);
  	console.log('Fruit removed');
  } else if (input.toLowerCase() === 'sort') {
  	let sortedFruits = sortFruits(fruits);
  	console.log('Fruits sorted');
  	console.log(sortedFruits);
  } else if (input.toLowerCase() === 'display') {
  	displayFruits(fruits);
  } else if (input.toLowerCase() === 'clear') {
  	clearFruits(fruits);
  	console.log('Fruits cleared');
  } else if (input.toLowerCase() === 'randomize') {
  	randomizeFruits(fruits);
  	console.log('Fruits randomized');
  } else if (input.toLowerCase() === 'search') {
  	let searchFruitInput = prompt('What fruit are you looking for?');
  	searchFruits(fruits, searchFruitInput);
  } else {
  	console.log('Input not recognized');
  }
  console.log('Fruits are now:', fruits);
}

//Call runFruitProgram function on page load
runFruitProgram(prompt('What would you like to do? (add, remove, sort, display, clear, randomize, search)'));