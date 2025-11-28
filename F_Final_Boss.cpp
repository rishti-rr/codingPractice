#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        long long h;
        int n;
        cin >> h >> n;
        
        vector<int> damage(n);
        vector<int> cooldown(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> damage[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> cooldown[i];
        }
        
        using Attack = tuple<int, int, int>; // (next available turn, damage, cooldown)
        priority_queue<Attack, vector<Attack>, greater<Attack>> pq;
        
        for (int i = 0; i < n; ++i) {
            pq.emplace(0, damage[i], cooldown[i]);
        }
        
        long long totalDamage = 0;
        int turn = 0;
        
        while (h > 0) {
            turn++;
            vector<Attack> toRequeue;
            long long turnDamage = 0;
            
            while (!pq.empty() && get<0>(pq.top()) <= turn) {
                auto [availTurn, dmg, cd] = pq.top();
                pq.pop();
                turnDamage += dmg;
                toRequeue.emplace_back(turn + cd, dmg, cd);
            }
            
            for (const auto& attack : toRequeue) {
                pq.push(attack);
            }
            
            h -= turnDamage;
        }
        
        cout << turn << endl;
    }
    
    return 0;
}
