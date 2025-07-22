#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= m; col++) {
            if (row % 2 == 1) {
                cout << "#";
            } else {
                if ((row / 2) % 2 == 1) {
                    if (col == m) cout << "#";
                    else cout << ".";
                } else {
                    if (col == 1) cout << "#";
                    else cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
