#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Define a struct for menu items
struct MenuItem
{
    string name;
    double price;
};

// Define a struct for orders
struct Order
{
    string itemName;
    int quantity;
};

class Restaurant
{
private:
    vector<MenuItem> menu; // Vector to store menu items
    vector<Order> orders;  // Vector to store orders

public:
    // Function to add items to the menu
    void addToMenu(const MenuItem &item)
    {
        menu.push_back(item);
    }

    // Function to display the menu
    void displayMenu()
    {
        cout << "Menu:\n";
        for (const auto &item : menu)
        {
            cout << item.name << " - $" << fixed << setprecision(2) << item.price << endl;
        }
    }

    // Function to place an order
    void placeOrder(const string &itemName, int quantity)
    {
        orders.push_back({itemName, quantity});
    }

    // Function to calculate total bill
    double calculateBill()
    {
        double total = 0.0;
        for (const auto &order : orders)
        {
            for (const auto &item : menu)
            {
                if (order.itemName == item.name)
                {
                    total += item.price * order.quantity;
                }
            }
        }
        return total;
    }

    // Function to display order summary
    void displayOrderSummary()
    {
        cout << "Order Summary:\n";
        for (const auto &order : orders)
        {
            cout << order.itemName << " - Quantity: " << order.quantity << endl;
        }
        cout << "Total Bill: $" << fixed << setprecision(2) << calculateBill() << endl;
    }
};

int main()
{
    // Create a Restaurant object
    Restaurant restaurant;

    // Define menu items
    MenuItem item1 = {"Burger", 5.99};
    MenuItem item2 = {"Pizza", 8.99};
    MenuItem item3 = {"Salad", 4.99};

    // Add menu items to the restaurant
    restaurant.addToMenu(item1);
    restaurant.addToMenu(item2);
    restaurant.addToMenu(item3);

    // Display the menu
    restaurant.displayMenu();

    // Place orders
    restaurant.placeOrder("Burger", 2);
    restaurant.placeOrder("Pizza", 1);

    // Display order summary
    restaurant.displayOrderSummary();

    return 0;
}
