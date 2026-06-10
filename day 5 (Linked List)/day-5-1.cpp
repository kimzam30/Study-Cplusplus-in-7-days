#include <iostream>
using namespace std;

// The Blueprint for a single link in the chain
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; // The starting point of the list

public:
    // Constructor: Starts with an empty list
    LinkedList() : head(nullptr) {}

    // Adds a new value to the END of the list
    void append(int value) {
        Node* newNode = new Node(value); // Create the new node in memory

        // TODO 1: If the list is completely empty (head is nullptr), 
        // make 'head' point to the 'newNode'. Then return.
        if (head == nullptr) {
            head = newNode;
            return;
        }

        // TODO 2: If the list is NOT empty, we need to find the last node.
        // Create a temporary pointer (e.g., Node* temp = head;)
        // Write a while loop that runs as long as temp->next is NOT nullptr.
        // Inside the loop, move temp forward (temp = temp->next).
        // Once the loop finishes, temp is pointing to the last node.
        // Finally, set temp->next to your newNode.
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        
    }

    // Prints the entire list
    void display() {
        // TODO 3: Create a temporary pointer starting at 'head'.
        // Write a while loop that runs as long as the pointer itself is NOT nullptr.
        // Inside the loop, print the pointer's data, and then move the pointer forward.
        // Format the output to look like: 10 -> 20 -> 30 -> NULL
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main() {
    LinkedList serverQueue;

    cout << "Building the Linked List..." << endl;
    serverQueue.append(101);
    serverQueue.append(204);
    serverQueue.append(308);

    cout << "Current Server Queue:" << endl;
    serverQueue.display(); // Expected output: 101 -> 204 -> 308 -> NULL

    return 0;
}