#include <stdio.h>

//amount of fruit available in the market
int FruitQuantity = 1000;

//Price of a single fruit 
int FruitPrice = 5;

// Define a type for a fruit
typedef struct {
    int type; //1 for apples, 2 for oranges, 3 for grapes
    int count; //number of that type of fruit
} Fruit;

// Function to buy a certain amount of a certain kind of fruit 
void buyFruit(Fruit *fruit,int type, int amount){
    if(FruitQuantity < amount) {
        printf("Sorry, there is not enough fruit available in the market");
    } else {
        fruit->type = type;
        fruit->count = amount;
        FruitQuantity -= amount;
    }
}

// Function to add a certain amount of a certain kind of fruit 
void addFruit(Fruit *fruit,int type, int amount){
    if(FruitQuantity + amount > 1000) {
        printf("Sorry, there is not enough space in the market");
    } else {
        fruit->type = type;
        fruit->count += amount;
        FruitQuantity += amount;
    }
}

// Function to calculate the cost of buying a certain amount of a certain type of fruit 
int calculateFruitCost(Fruit *fruit){
    return fruit->count * FruitPrice;
}

// Function to print the current status of the market
void printMarketStatus(){
    printf("Fruit in the market: %d\n", FruitQuantity);
    printf("Price of a single fruit: %d\n", FruitPrice);
}

// Function to adjust the price of a single Fruit
void adjustFruitPrice(int newPrice){
    FruitPrice = newPrice;
}

// Main function to run the program
int main(){
    // Define the fruits being sold
    Fruit apples;
    Fruit oranges;
    Fruit grapes; 

    // Buying 5 apples
    buyFruit(&apples, 1, 5);

    // Buying 10 oranges
    buyFruit(&oranges, 2, 10);

    // Buying 15 grapes
    buyFruit(&grapes, 3, 15);

    // Calculate the cost of the purchased fruits
    int cost = calculateFruitCost(&apples) + calculateFruitCost(&oranges) + calculateFruitCost(&grapes);

    // Print the cost of purchased fruits
    printf("Total cost: %d\n", cost);

    // Print the current status of the market
    printMarketStatus();

    // Adding 5 oranges
    addFruit(&oranges, 2, 5);

    // Increasing the price of a single fruit
    adjustFruitPrice(7);

    // Print the current status of the market
    printMarketStatus();

    return 0;
}