#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,n,p,k;
        cin>>x>>y>>n;
        p=(n-y)/x;
        k=(p*x)+y;
        cout<<k<<endl;
    }
}