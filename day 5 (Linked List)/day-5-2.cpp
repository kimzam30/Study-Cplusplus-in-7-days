#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Destructor: Prevents Memory Leaks
    ~LinkedList() {
        Node* current = head;
        Node* nextNode = nullptr;

        // TODO 1: Write a while loop that runs as long as 'current' is not nullptr.
        while (current != nullptr) {
            // TODO 2: Inside the loop:
            // 1. Set nextNode = current->next; (Memorize the next step)
            // 2. delete current; (Destroy the current node)
            // 3. current = nextNode; (Step forward)
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        cout << "Linked List completely destroyed. Memory freed." << endl;
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Removes the first node that matches the target value
    void removeNode(int target) {
        // Guard clause: If list is empty, do nothing
        if (head == nullptr) return;

        // TODO 3: What if the target is the very first node (the head)?
        // Write an if-statement checking if head->data == target.
        // If true:
        // 1. Create a temporary pointer to hold the current head.
        // 2. Move the head forward (head = head->next).
        // 3. delete the temporary pointer.
        // 4. Print a success message and return.
        if (head->data == target) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node " << target << " removed from the head." << endl;
            return;
        }

        // Setup for middle/end deletion
        Node* current = head;
        Node* prev = nullptr;

        // TODO 4: Traverse the list to find the target.
        // Write a while loop: runs as long as current != nullptr AND current->data != target.
        // Inside the loop:
        // 1. prev = current; (prev catches up to current)
        // 2. current = current->next; (current steps forward)
        while (current != nullptr && current->data != target) {
            prev = current;
            current = current->next;
        }

        // If we finished the loop and current is nullptr, the target wasn't in the list
        if (current == nullptr) {
            cout << "Node " << target << " not found." << endl;
            return;
        }

        // TODO 5: The Bypass and Delete
        // At this point, 'current' is the node we want to delete, and 'prev' is the node before it.
        // 1. Make prev's next pointer bypass current. (prev->next = current->next;)
        // 2. delete current;
        // 3. Print a success message (e.g., "Node [target] removed.")
        prev->next = current->next;
        delete current;
        cout << "Node " << target << " removed." << endl;
    }
};

int main() {
    LinkedList serverQueue;

    serverQueue.append(101);
    serverQueue.append(204);
    serverQueue.append(308);
    serverQueue.append(400);

    cout << "Initial Queue:" << endl;
    serverQueue.display();

    cout << "\nRemoving node 204 (Middle)..." << endl;
    serverQueue.removeNode(204);
    serverQueue.display();

    cout << "\nRemoving node 101 (Head)..." << endl;
    serverQueue.removeNode(101);
    serverQueue.display();

    cout << "\nAttempting to remove node 999 (Not found)..." << endl;
    serverQueue.removeNode(999);

    cout << "\nProgram ending, triggering Destructor..." << endl;
    return 0;
}