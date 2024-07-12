#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int f=1;
        for(int i=2; i<n; i+=x){
            f++;
        }
        cout<<f<<endl;
    }
    return 0;
}