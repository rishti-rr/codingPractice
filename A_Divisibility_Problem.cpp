#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        // int cnt=0;
        // for(int i=0; i<a; i++){
            if(a%b == 0){
                // break;
                cout<<0<<endl;
            }
            else{
                cout<<b-(a%b)<<endl;
                // a++;
                // cnt++;
            }
        // }
        // cout<<cnt<<endl;
    }
    return 0;
}