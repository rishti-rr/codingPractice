#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    cin>>n;
    unordered_set<string> coins;
    for (int i=0; i<n; ++i) {
        int x,y;
        cin>>x>>y;
        coins.insert(to_string(x) + "," + to_string(y));
    }
    int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
    for (auto coin : coins) {
        int comma = coin.find(',');
        int x = stoi(coin.substr(0, comma));
        int y = stoi(coin.substr(comma + 1));

        bool canCollect = false;

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (coins.count(to_string(nx) + "," + to_string(ny))) {
                canCollect = true;
                break;
            }
        }

        cout << (canCollect ? "NO" : "YES") << endl;
    }

    return 0;
}











