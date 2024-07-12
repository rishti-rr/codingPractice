#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        int r = max(a*2,b)*max(a*2,b);
        cout<<r<<endl;
    }
    return 0;
}