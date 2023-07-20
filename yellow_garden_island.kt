// Fruit class
class Fruit {
    constructor(name: String, color: String, quantity: Int) {
        this.name = name
        this.color = color
        this.quantity = quantity
    }
    var name: String
    var color: String
    var quantity: Int
    
    fun getFruitName() : String {
        return this.name
    }
    
    fun getFruitColor() : String {
        return this.color
    }
    
    fun getFruitQuantity() : Int {
        return this.quantity
    }
    
    fun printFruitInfo() {
        println("Fruit: " + this.name + ", Color: "+ this.color + ", Quantity: "+ this.quantity)
    }
}

// Fruit Store
class FruitStore {
    constructor(name: String, address: String, listOfFruits: List<Fruit>) {
        this.name = name
        this.address = address
        this.listOfFruits = listOfFruits
    }
    var name: String
    var address: String
    var listOfFruits : List<Fruit>
    
    fun getStoreName() : String {
        return this.name
    }
    
    fun getStoreAddress() : String {
        return this.address
    }
    
    fun getListOfFruits() : List<Fruit> {
        return this.listOfFruits
    }
    
    fun addFruit(fruit: Fruit) {
        this.listOfFruits.add(fruit)
    }
    
    fun removeFruit(fruitName: String) {
        this.listOfFruits.removeIf { it.getFruitName() == fruitName }
    }
    
    fun printFruitStoreInfo() {
        println("Store name: " + this.name + ", Address: "+ this.address + ", Fruit list: "+ this.listOfFruits)
    }
}

// Fruit Basket
class FruitBasket {
    constructor(name: String, listOfFruits: List<Fruit>) {
        this.name = name
        this.listOfFruits = listOfFruits
    }
    var name: String
    var listOfFruits : List<Fruit>
    
    fun getBasketName() : String {
        return this.name
    }
    
    fun getListOfFruits() : List<Fruit> {
        return this.listOfFruits
    }
    
    fun addFruit(fruit: Fruit) {
        this.listOfFruits.add(fruit)
    }
     
    fun removeFruit(fruitName: String) {
        this.listOfFruits.removeIf { it.getFruitName() == fruitName }
    }
    
    fun printFruitList() {
        listOfFruits.forEach { it.printFruitInfo() }
    }
}

// Shopper class
class Shopper {
    constructor(name: String, listOfBaskets: List<FruitBasket>) {
        this.name = name
        this.listOfBaskets = listOfBaskets
    }
    var name: String
    var listOfBaskets : List<FruitBasket>
    
    fun getShopperName() : String {
        return this.name
    }
    
    fun getListOfBaskets() : List<FruitBasket> {
        return this.listOfBaskets
    }
    
    fun addBasket(basket: FruitBasket) {
        this.listOfBaskets.add(basket)
    }
    
    fun removeBasket(basketName: String) {
        this.listOfBaskets.removeIf { bName -> bName.getBasketName() == basketName }
    }
    
    fun printShopperInfo() {
        println("Shopper: " + this.name + ", Baskets: " + this.listOfBaskets)
    }
}

// Fruit Market
class FruitMarket {
    constructor(name: String, listOfStores: List<FruitStore>, listOfShoppers: List<Shopper>) {
        this.name = name
        this.listOfStores = listOfStores
        this.listOfShoppers = listOfShoppers
    }
    var name: String
    var listOfStores : List<FruitStore>
    var listOfShoppers : List<Shopper>
    
    fun getMarketName() : String {
        return this.name
    }
    
    fun getListOfStores() : List<FruitStore> {
        return this.listOfStores
    }
    
    fun getListOfShoppers() : List<Shopper> {
        return this.listOfShoppers
    }
    
    fun addStore(store: FruitStore) {
        this.listOfStores.add(store)
    }
    
    fun removeStore(storeName: String) {
        this.listOfStores.removeIf { sName -> sName.getStoreName() == storeName }
    }
    
    fun addShopper(shopper: Shopper) {
        this.listOfShoppers.add(shopper)
    }
    
    fun removeShopper(shopperName: String) {
        this.listOfShoppers.removeIf { sname -> sname.getShopperName() == shopperName }
    }
    
    fun printMarketInfo() {
        println("Market name: " + this.name + ", Stores: "+ this.listOfStores + ", Shoppers: "+ this.listOfShoppers)
    }
}

// Main class
fun main(args: Array<String>) {
    // Creating Fruit Objects
    val apple = Fruit("Apple", "Red", 10)
    val banana = Fruit("Banana", "Yellow", 15)
    val orange = Fruit("Orange", "Orange", 20)
    val grape = Fruit("Grape", "Purple", 25)
    
    // Creating Fruit Store Objects
    val store1 = FruitStore("Fruitopia", "123 Main St.", mutableListOf(apple, banana))
    val store2 = FruitStore("Fruitland", "456 Main St.", mutableListOf(orange, grape))
    
    // Creating Fruit Basket Objects
    val basket1 = FruitBasket("Basket1", mutableListOf(apple, orange))
    val basket2 = FruitBasket("Basket2", mutableListOf(banana, grape))
    
    // Creating Shopper Objects
    val shopper1 = Shopper("John", mutableListOf(basket1))
    val shopper2 = Shopper("Jane", mutableListOf(basket2))
    
    // Creating Fruit Market Object
    val fruitMarket = FruitMarket("Fruit for All", mutableListOf(store1, store2), mutableListOf(shopper1, shopper2))
    
    fruitMarket.printMarketInfo()
}