// Read, Explain and Write: Vector Methods
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> inventory;

    // Adding items
    inventory.push_back("Health Potion");
    inventory.push_back("Iron Sword");
    inventory.push_back("Wooden Shield");

    // TODO 1: Explain what this loop is doing. 
    // Why is 'i < 3' a bad practice here? 
    // Rewrite the loop using a dynamic vector method so it works no matter how many items are added.
    cout << "Current Inventory:" << endl;
    for (int i = 0; i < inventory.size(); i++) {
        cout << "- " << inventory[i] << endl;
    }
    // the loop is printing out the current inventory items. 
    // The condition i < 3 is a bad practice because it assumes that there will always be exactly 3 items in the inventory. 
    //If more or fewer items are added, this loop will either miss some items or cause an out-of-bounds error. A better way to write this loop is to use the size of the vector:



    // TODO 2: The player drops the last item they picked up. 
    // What vector method removes the VERY LAST item in the vector? Write the code here.
    inventory.pop_back();


    // TODO 3: The player died. We need to clear the ENTIRE inventory. 
    // What vector method deletes everything inside the vector? Write the code here.
    inventory.clear();

    // TODO 4: Write an if-statement to check if the inventory is currently empty.
    // If it is, print "Inventory is completely empty." (Hint: look up the .empty() method for vectors)
    if (inventory.empty()) {
        cout << "Inventory is completely empty." << endl;
    }

    return 0;
}