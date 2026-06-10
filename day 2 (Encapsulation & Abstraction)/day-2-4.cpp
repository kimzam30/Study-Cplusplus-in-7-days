#include <iostream>
using namespace std;

class Player {
private:
    // THE VIP ROOM
    // The outside world cannot see or touch this variable.
    int health = 100; 

public:
    // ==========================================
    // THE SETTER (The Bouncer checking the door)
    // ==========================================
    void setHealth(int newHealth) {
        // We write the rules!
        if (newHealth < 0) {
            cout << "Error: Health cannot be negative. Setting to 0 instead." << endl;
            health = 0;
        } 
        else if (newHealth > 100) {
            cout << "Error: Max health is 100. Setting to 100 instead." << endl;
            health = 100;
        } 
        else {
            // If it passes the rules, we safely update the private data
            health = newHealth;
            cout << "Health successfully updated to: " << health << endl;
        }
    }

    // ==========================================
    // THE GETTER (The Bouncer's earpiece)
    // ==========================================
    int getHealth() {
        return health; // Just grabs a copy of the private data and hands it to you
    }
};

int main() {
    Player myCharacter;

    // 1. ILLEGAL: myCharacter.health = 50; (Will crash compiler)

    // 2. THE GETTER: Asking the bouncer for the info
    int currentHP = myCharacter.getHealth();
    cout << "Starting HP: " << currentHP << endl;

    // 3. THE SETTER: Passing valid data
    myCharacter.setHealth(85); 

    // 4. THE SETTER: Trying to cheat the system (The bouncer blocks it!)
    myCharacter.setHealth(-500); 

    return 0;
}