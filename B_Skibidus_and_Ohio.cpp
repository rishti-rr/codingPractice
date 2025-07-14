#include <iostream>
using namespace std;

int minLength(string s) {
    string result = "";
    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back(); // Remove adjacent duplicate
        } else {
            result.push_back(c);
        }
    }
    return result.length(); // Remaining length after all operations
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minLength(s) << endl;
    }
    return 0;
}
