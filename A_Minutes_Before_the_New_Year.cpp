#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m,current_time=0,new_year;
        cin>>h>>m;
        current_time = (h*60)+m;
        new_year = 24*60;
        cout<<new_year - current_time<<endl;
    }
    return 0;
}