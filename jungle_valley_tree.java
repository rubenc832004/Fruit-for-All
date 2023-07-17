import java.util.*;

public class FruitForAll
{
    // Declaring global variables
    String[] fruits = {"apples", "oranges", "bananas", "grapes", "pineapples"};
    int count;
 
    // Constructor to initialize the global variables
    public FruitForAll() {
        count = 0;
    }
    
    // Method to provide the fruits to all
    public void provideFruits(){
        while(count < fruits.length){
            System.out.println("Enjoy "+fruits[count]);
            count++;
        }
    }
 
    // Main Method
    public static void main(String[] args) {
        FruitForAll objFruitForAll = new FruitForAll();
        objFruitForAll.provideFruits();
    }
}