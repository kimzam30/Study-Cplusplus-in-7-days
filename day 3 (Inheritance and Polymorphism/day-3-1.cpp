// Read, Explain and Fill the Blanks: Polymorphism
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Character {
protected:
    string name;
public:
    Character(string n) : name(n) {}

    // TODO 1: Add a keyword to make this function overridable by child classes
    virtual void useAbility() {
        cout << name << " does a basic attack!" << endl;
    }

    // A virtual destructor is required when using polymorphism 
    virtual ~Character() {
        cout << name << " left the game." << endl;
    }
};

// TODO 2: Modify this line so Mage publicly inherits from Character
class Mage : public Character {
public:
    // This constructor passes 'n' up to the Character base constructor
    Mage(string n) : Character(n) {}

    // TODO 3: Write the useAbility() function here. 
    // Use the override keyword. It should print: "[name] casts Fireball!"
    void useAbility() override{
        cout << name << " casts Fireball!" << endl;
    }
};

// TODO 4: Modify this line so Warrior publicly inherits from Character
class Warrior : public Character {
public:
    // This constructor passes 'n' up to the Character base constructor
    Warrior(string n) : Character(n) {}

    // TODO 5: Write the useAbility() function here. 
    // Use the override keyword. It should print: "[name] performs a Heavy Strike!"
    void useAbility() override{
        cout << name << " performs a Heavy Strike!" << endl;
    }
};

int main() {
    // We use pointers to the Base class to store Derived objects
    Character* player1 = new Mage("Gandalf");
    Character* player2 = new Warrior("Arthur");

    // TODO 6: Call the useAbility() method for both player1 and player2. 
    // Remember, because player1 and player2 are POINTERS, you cannot use the dot operator (.)
    // You must use the arrow operator (->) to call their methods!
    player1->useAbility();
    player2->useAbility();


    // Clean up memory (since we used 'new', we must use 'delete')
    delete player1;
    delete player2;

    return 0;
}