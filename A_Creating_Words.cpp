#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        for(int i=1; i<=3; i++){
            char temp = a[0];
            a[0] = b[0];
            b[0] = temp;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}