#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=0; i<10; i++){
            sum=a+b;
        }
        // cout<<a<<"+"<<b<<"="<<sum<<endl;
        cout<<sum<<endl;
    }
}