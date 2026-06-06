// Read, Explain and Write: Encapsulation and Abstraction
#include <iostream>
#include <string>
using namespace std;

class Bookmark{
    private:
    string title;
    string url;
    bool isShortlisted;
    int clickCount;

    public:
    Bookmark(string title, string url) : title(title), url(url), isShortlisted(false), clickCount(0) {}

    void toggleShortlist() {
        if (isShortlisted == false){
            isShortlisted = true;
            cout << "Bookmark '" << title << "' has been shortlisted." << endl;
        }
        else {
            if (isShortlisted == true){
                isShortlisted = false;
            cout << "Bookmark '" << title << "' has been removed from shortlist." << endl;
        }
    }
}
    string visitUrl() {
        clickCount++;
        return url;
    }
    void printStats(){
        cout << "Bookmark: " << title << endl;
        cout << "URL: " << url << endl;
        cout << "Shortlisted: " << (isShortlisted ? "Yes" : "No") << endl;
        cout << "Click Count: " << clickCount << endl;
    }
};

int main(){
    Bookmark bookmark1("OpenAI", "https://www.openai.com");
    bookmark1.printStats();

    bookmark1.toggleShortlist();
    bookmark1.visitUrl();
    bookmark1.visitUrl();
    bookmark1.visitUrl();
    bookmark1.toggleShortlist();
    bookmark1.printStats();
    
    return 0;

};