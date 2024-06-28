#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,house=1;
    cin>>n>>m;
    long long int move = 0;
    for(int i=0; i<m; i++){
        int task;
        cin>>task;
        if(task>=house)
            move += task-house;
        else
            move += n-(house-task);
        house = task;
    }
    cout<<move<<endl;
    return 0;
}
