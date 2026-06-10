#include <iostream>
using namespace std;

// The Blueprint
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// ---------------------------------------------------------
// THE STACK (Last-In, First-Out)
// ---------------------------------------------------------
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int value) {
        Node* newNode = new Node(value);
        // TODO 1: Make newNode point to the current top, then update top to be newNode.
        
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        // TODO 2: Create a temp pointer to hold 'top'. 
        // Print the data being popped.
        // Move 'top' to top->next. 
        // Delete the temp pointer.
        
    }

    void display() {
        Node* temp = top;
        cout << "Stack (Top to Bottom): ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// ---------------------------------------------------------
// THE QUEUE (First-In, First-Out)
// ---------------------------------------------------------
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);
        // TODO 3: If the queue is completely empty (front is nullptr),
        // set both front and rear to newNode, then return.
        
        
        // If not empty, attach newNode behind the current rear, 
        // then update rear to be the newNode.
        
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
        // TODO 4: Create a temp pointer to hold 'front'.
        // Print the data being dequeued.
        // Move 'front' to front->next.
        // If 'front' is now nullptr (meaning the queue is now empty), set 'rear' to nullptr as well.
        // Delete the temp pointer.
        
    }

    void display() {
        Node* temp = front;
        cout << "Queue (Front to Rear): ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// ---------------------------------------------------------
// MAIN EXECUTION
// ---------------------------------------------------------
int main() {
    cout << "--- TESTING STACK (LIFO) ---" << endl;
    Stack undoHistory;
    undoHistory.push(10);
    undoHistory.push(20);
    undoHistory.push(30); // 30 went in last
    undoHistory.display();
    
    undoHistory.pop();    // 30 should come out first
    undoHistory.display();

    cout << "\n--- TESTING QUEUE (FIFO) ---" << endl;
    Queue taskRunner;
    taskRunner.enqueue(10);
    taskRunner.enqueue(20);
    taskRunner.enqueue(30); // 10 went in first
    taskRunner.display();

    taskRunner.dequeue();   // 10 should come out first
    taskRunner.display();

    return 0;
}