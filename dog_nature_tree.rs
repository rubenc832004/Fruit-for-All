fn main() {
    let apples = "Apples";
    let oranges = "Oranges";
    let bananas = "Bananas";
    let kiwis = "Kiwis";
    let peaches = "Peaches";
    let plums = "Plums";
    let cherries = "Cherries";
    let grapes = "Grapes";

    // Create Vector to store fruits
    let mut fruits: Vec<&str> = Vec::new();

    // Add all fruits to vector
    fruits.push(apples);
    fruits.push(oranges);
    fruits.push(bananas);
    fruits.push(kiwis);
    fruits.push(peaches);
    fruits.push(plums);
    fruits.push(cherries);
    fruits.push(grapes);

    println!("Fruits for all!");
    for fruit in &fruits {
        println!("{}", fruit);
    }

    // Function to sort fruits alphabetically
    fn sort_fruits(v: &mut Vec<&str>) {
        v.sort();
    }

    // Call sort_fruits()
    sort_fruits(&mut fruits);

    // Print sorted fruits
    println!("\nFruits have been sorted alphabetically!");
    for fruit in &fruits {
        println!("{}", fruit);
    }

    // Function to find largest fruit
    fn largest_fruit(v: &[&str]) -> &str {
        let mut largest = &v[0];

        for i in 1..v.len() {
            if v[i].len() > largest.len() {
                largest = &v[i];
            }
        }

        largest
    }

    // Call largest_fruit()
    let largest_fruit = largest_fruit(&fruits);

    // Print largest fruit
    println!("\nThe largest fruit is {}", largest_fruit);

    // Function to find smallest fruit
    fn smallest_fruit(v: &[&str]) -> &str {
        let mut smallest = &v[0];

        for i in 1..v.len() {
            if v[i].len() < smallest.len() {
                smallest = &v[i];
            }
        }

        smallest
    }

    // Call smallest_fruit()
    let smallest_fruit = smallest_fruit(&fruits);

    // Print smallest fruit
    println!("The smallest fruit is {}", smallest_fruit);

    // Function to display fruits in reverse
    fn reverse_fruits(v: &[&str]) {
        println!("\nFruits in reverse:");
        for i in (0..v.len()).rev() {
            println!("{}", v[i]);
        }
    }

    // Call reverse_fruits()
    reverse_fruits(&fruits);
}