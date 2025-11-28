#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> g(n);
        for (int i = 0; i < n; ++i) {
            cin >> g[i];
        }
        
        int minRow = n, maxRow = -1, minCol = m, maxCol = -1;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (g[i][j] == '#') {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }
        int centerRow = (minRow + maxRow) / 2 + 1;
        int centerCol = (minCol + maxCol) / 2 + 1;
        
        cout << centerRow << " " << centerCol << endl;
    }
    return 0;
}
