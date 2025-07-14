#include <iostream>
#include <vector>
using namespace std;

string convertToPlural(const string &singular) {
    return singular.substr(0, singular.size() - 2) + "i";
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    
    while (t--) {
        string singular;
        cin >> singular;
        results.push_back(convertToPlural(singular));
    }
    
    for (const string &plural : results) {
        cout << plural << endl;
    }
    
    return 0;
}