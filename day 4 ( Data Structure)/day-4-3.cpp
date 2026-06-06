// std::find() and std::vector::erase()
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // The Kentra CI/CD Deployment Queue
    vector<string> deployQueue;
    deployQueue.push_back("Auth_Service");
    deployQueue.push_back("UI_Update"); // <-- This one is corrupted!
    deployQueue.push_back("Database_Migration");
    deployQueue.push_back("Storage_Link");

    string target = "UI_Update";

    // TODO 1: Create an 'auto' variable named 'it'. 
    // Set it equal to the result of std::find() searching for 'target'.
    auto it = find(deployQueue.begin(), deployQueue.end(), "UI_Update");

    // TODO 2: Write an if-statement checking if 'it' is NOT equal to deployQueue.end()
    if (it != deployQueue.end()) {
        // TODO 3: If true, print a warning message and use deployQueue.erase() to remove 'it'.
        cout << "Warning: " << target << " is corrupted and will be removed from the deployment queue." << endl;
        deployQueue.erase(it);
    }


    // TODO 4: Write a range-based for loop to print the remaining services in deployQueue.
    cout << "\nFinal Deployment Queue:" << endl;
    for (const auto& service : deployQueue) {
        cout << "- " << service << endl;
    }

    return 0;
}