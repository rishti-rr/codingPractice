#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 

    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;

        long long max_p = 0;
        for (long long a = 1; a * a * a <= k; ++a) {
            if (k % a == 0) {
                long long r = k / a;

                for (long long b = 1; b * b <= r; ++b) {
                    if (r % b == 0) {
                        long long c = r / b;

                        if (a <= x && b <= y && c <= z) {
                            max_p = max(max_p, (x - a + 1) * (y - b + 1) * (z - c + 1));
                        }
                        if (a <= x && c <= y && b <= z) {
                            max_p = max(max_p, (x - a + 1) * (y - c + 1) * (z - b + 1));
                        }
                        if (b <= x && a <= y && c <= z) {
                            max_p = max(max_p, (x - b + 1) * (y - a + 1) * (z - c + 1));
                        }
                        if (b <= x && c <= y && a <= z) {
                            max_p = max(max_p, (x - b + 1) * (y - c + 1) * (z - a + 1));
                        }
                        if (c <= x && a <= y && b <= z) {
                            max_p = max(max_p, (x - c + 1) * (y - a + 1) * (z - b + 1));
                        }
                        if (c <= x && b <= y && a <= z) {
                            max_p = max(max_p, (x - c + 1) * (y - b + 1) * (z - a + 1));
                        }
                    }
                }
            }
        }

        cout << max_p << endl;
    }

    return 0;
}
