// This program will allow a user to order fruit from a menu. 

// Imports 
use std::collections::HashMap; 
use std::io;

fn main() {
    let mut inventory: HashMap<&str, i32> = HashMap::new();
    let mut total_cost = 0;

    // Fill the fruit inventory
    inventory.insert("Apple", 10);
    inventory.insert("Banana", 8);
    inventory.insert("Orange", 15);
    inventory.insert("Grapes", 5); 

    // Welcome the user to the program
    println!("Welcome to Fruit for All!");
    println!("Here is a list of the items we offer:"); 

    // Iterate over the inventory and print out the key/value pairs
    for (fruit, price) in &inventory { 
        println!("{}: {}", fruit, price); 
    } 

    // Prompt the user to enter their order
    println!("Please enter your order or enter \"quit\" to end the program:"); 

    loop {
        // Get user input
        let mut user_order = String::new(); 
        io::stdin().read_line(&mut user_order)
            .expect("Failed to read line"); 

        // Check if the user entered quit
        if user_order.trim() == "quit" {
            break;
        }

        // Split user input by commas 
        let parts: Vec<&str> = user_order.split(',').collect(); 

        // Iterate over each part of the input 
        for part in parts {
            // Split part by whitespace
            let orders: Vec<&str> = part.split_whitespace().collect();

            // If the order consists of two parts (fruit and quantity)
            if orders.len() == 2 {
                let fruit = orders[0];
                let quantity = orders[1].parse::<i32>().unwrap(); 

                // Check if the fruit is in the inventory
                if inventory.contains_key(fruit) {
                    // Calculate the cost of the order
                    let cost = inventory[fruit] * quantity; 
                    println!("Ordering {} {}s at {} each will cost {}", 
                        quantity, fruit, inventory[fruit], cost); 

                    // Update the total cost
                    total_cost += cost; 
                } 
                else {
                    println!("Sorry, we do not have {}", fruit); 
                }
            }
            else {
                println!("Invalid order"); 
            }
        }
    }

    println!("Your total cost is {}", total_cost);
    println!("Thank you for using Fruit for All!"); 
}