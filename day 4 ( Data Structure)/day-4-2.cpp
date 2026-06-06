#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    vector<int> scrapValues ;
    scrapValues.push_back(45);
    scrapValues.push_back(12);
    scrapValues.push_back(89);
    scrapValues.push_back(23);
    scrapValues.push_back(105);

    sort(scrapValues.rbegin(), scrapValues.rend());

    scrapValues.pop_back();

    for (int scrap : scrapValues){
        cout << scrap << endl;
    }
    };

