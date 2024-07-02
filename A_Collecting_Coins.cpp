#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n,s=0;
        cin>>a>>b>>c>>n;
        s=a+b+c+n;
        if(s%3!=0 || s/3<a || s/3<b || s/3<c){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}