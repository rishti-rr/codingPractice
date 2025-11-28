#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        int x = 2;
        long long max_sum = 0;
        for (int i = 2; i <= n; ++i) {
            int k = n / i; 
            long long sum = i * k * (k + 1) / 2; 

            if (sum > max_sum) {
                max_sum = sum;
                x = i;
            }
        }
        cout << x << endl; 
    }
    return 0;
}
