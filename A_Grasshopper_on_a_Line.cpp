#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k==0){
                for(int i=0; i<x; i++){
                    if(i%k!=0){
                        cout<<2<<endl;
                        cout<<(x-i)<<" "<<i<<endl;
                        break;
                    }
                }
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
    return 0;
}