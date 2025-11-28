#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x[4], y[4];
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        int minX = x[0], maxX = x[0];
        int minY = y[0], maxY = y[0];
        for (int i = 1; i < 4; i++) {
            minX = min(minX, x[i]);
            maxX = max(maxX, x[i]);
            minY = min(minY, y[i]);
            maxY = max(maxY, y[i]);
        }
        int r = max(maxX - minX, maxY - minY);  
        int area = r * r;
        cout << area << endl;
    }
    return 0;
}
