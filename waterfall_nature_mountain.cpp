#include <iostream>
#include <string>

using namespace std;

// Class Fruit definition
class Fruit
{
    public:
        string fruitName;
        int quantity;
        int price;
 
        // Default Constructor
        Fruit()
        {
            fruitName = "";
            quantity = 0;
            price = 0;
        }
 
        // Parameterized Constructor
        Fruit(string name, int quantity, int price)
        {
            this->fruitName = name;
            this->quantity = quantity;
            this->price = price;
        }
 
        // getName() function
        string getName()
        {
            return this->fruitName;
        }
 
        // getQuantity() function
        int getQuantity()
        {
            return this->quantity;
        }
 
        // getPrice() function
        int getPrice()
        {
            return this->price;
        }
 
        // setName() function
        void setName(string name)
        {
            this->fruitName = name;
        }
 
        // setQuantity() function
        void setQuantity(int quantity)
        {
            this->quantity = quantity;
        }
 
        // setPrice() function
        void setPrice(int price)
        {
            this->price = price;
        }
 
        // toString() function
        string toString()
        {
            string description;
 
            description = getName() + ": quantity = " + to_string(getQuantity())
            + ", price = $" + to_string(getPrice());
 
            return description;
        }
};

// Global variables
Fruit fruits[100];
int nFruits = 0;
 
// Functions 
// addFruit() function 
void addFruit(Fruit f)
{
    fruits[nFruits] = f;
    nFruits++;
}

// removeFruit() function 
void removeFruit(string name)
{
    bool found = false;
    int pos;
 
    for (int i = 0; i < nFruits; i++)
    {
        if (fruits[i].getName() == name)
        {
            found = true;
            pos = i;
            break;
        }
    }
 
    if (found)
    {
        for (int i = pos; i < nFruits - 1; i++)
        {
            fruits[i] = fruits[i + 1];
        }
 
        nFruits--;
    }
}

// getFruit() function 
Fruit getFruit(string name)
{
    for (int i = 0; i < nFruits; i++)
    {
        if (fruits[i].getName() == name)
        {
            return fruits[i];
        }
    }
 
    return Fruit();
}

// showAll() function 
void showAll()
{
    for (int i = 0; i < nFruits; i++)
    {
        cout << fruits[i].toString() << endl;
    }
}

// Main function
int main()
{
    addFruit(Fruit("Apple", 10, 50));
    addFruit(Fruit("Orange", 20, 30));
    addFruit(Fruit("Banana", 30, 40));
    addFruit(Fruit("Grapes", 40, 60));
 
    showAll();
 
    removeFruit("Banana");
 
    cout << endl << "After removing Banana" << endl;
 
    showAll();
 
    return 0;
}