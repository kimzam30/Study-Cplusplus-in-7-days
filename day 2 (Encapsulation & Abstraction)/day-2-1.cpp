#include <iostream>
#include <string>
using namespace std;

class UserAccount {
private:
    string username;
    string password;
    bool isLoggedIn;
public:
    UserAccount(string user, string pass) : username(user), password(pass), isLoggedIn(false) {}

    void login(string user, string inputPassword) {
        if (user == username && inputPassword == password) {
            isLoggedIn = true;
            cout << "Login successful!" << endl;
            } else {
            cout << "Incorrect Password!" << endl;
        }
    }
    void logout() {
        isLoggedIn = false;
        cout << "Logged out successfully!" << endl;
    }
    void checkStatus() {
        if (isLoggedIn) {
            cout << "User " << username << " is currently logged in." << endl;
        } else {
            cout << "User " << username << " is currently logged out." << endl;
        }
    }
    ~UserAccount() {
        cout << "User account for " << username << " is being destroyed." << endl;
    }
};

int main() {
    UserAccount user1("kimzam", "password123");
    user1.checkStatus();

    user1.login("kimzam", "password1234");
    user1.checkStatus();

    user1.login("kimzam", "password123");
    user1.checkStatus();

    return 0;
}

