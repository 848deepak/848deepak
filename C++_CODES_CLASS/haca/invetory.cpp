#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Define a struct for inventory items
struct InventoryItem {
    string name;
    int quantity;
};

class InventorySystem {
private:
    vector<InventoryItem> inventory;

public:
    // Function to add a new item to the inventory
    void addItem(const string& name, int quantity) {
        // Check if the item already exists
        auto it = find_if(inventory.begin(), inventory.end(), [&](const InventoryItem& item) {
            return item.name == name;
        });

        if (it != inventory.end()) {
            // Item already exists, update quantity
            it->quantity += quantity;
        } else {
            // Item does not exist, add it to inventory
            inventory.push_back({name, quantity});
        }
    }

    // Function to update quantity of an existing item
    void updateQuantity(const string& name, int quantity) {
        auto it = find_if(inventory.begin(), inventory.end(), [&](const InventoryItem& item) {
            return item.name == name;
        });

        if (it != inventory.end()) {
            // Item found, update quantity
            it->quantity = quantity;
        } else {
            // Item not found
            cout << "Item not found in inventory." << endl;
        }
    }

    // Function to display current inventory
    void displayInventory() {
        cout << "Inventory:\n";
        for (const auto& item : inventory) {
            cout << "Name: " << item.name << ", Quantity: " << item.quantity << endl;
        }
    }

    // Function to generate report on low stock items
    void generateLowStockReport(int threshold) {
        cout << "Low Stock Report:\n";
        for (const auto& item : inventory) {
            if (item.quantity < threshold) {
                cout << "Name: " << item.name << ", Quantity: " << item.quantity << endl;
            }
        }
    }
};

int main() {
    // Create an InventorySystem object
    InventorySystem inventorySystem;

    // Add items to the inventory
    inventorySystem.addItem("Apples", 50);
    inventorySystem.addItem("Bananas", 30);
    inventorySystem.addItem("Oranges", 20);

    // Update quantity of an item
    inventorySystem.updateQuantity("Bananas", 40);

    // Display current inventory
    inventorySystem.displayInventory();

    // Generate low stock report
    inventorySystem.generateLowStockReport(25);

    return 0;
}
