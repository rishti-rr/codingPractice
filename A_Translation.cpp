#include<bits/stdc++.h>
using namespace std;
int main(){
    string t,s;
    cin>>t>>s;
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}