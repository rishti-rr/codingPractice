#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=0,s=0,t=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        r += a;
        s += b;
        t += c;
    }
    if(r==0 && s==0 && t==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}