// Read, Explain and Write: Inheritance and Polymorphism
#include <iostream>
#include <string>
using namespace std;

class Task {
    protected:
    string taskName;

    public:
    Task(string name) : taskName(name) {}
    virtual void run () = 0;
    virtual ~Task() {
        cout << taskName << " task" << taskName << " is being removed." << endl;
    }
};

class BotScriptTask : public Task {
    public:
    BotScriptTask(string name) : Task(name) {}
    void run() override {
        cout << "Running bot script task: " << taskName << "Executing Python automation script..." <<endl;
    }
};

class WeBuildTask : public Task {
    public:
    WeBuildTask(string name) : Task(name) {}
    void run() override {
        cout << "Running WeBuild task: " << taskName << "Compiling Next.js application..." <<endl;
    }
};

int main () {
    Task* pointer[3];
    pointer[0] = new BotScriptTask{"Discord_Watcher"};
    pointer[1] = new WeBuildTask{"Admin_Dashboard"};
    pointer[2] = new BotScriptTask{"Data_Scraper"};

    for (int i = 0; i < 3; i++) {
        pointer[i]->run();
    }
    for (int i = 0; i <3; i++) {
        delete pointer[i];
    }
    return 0;

}