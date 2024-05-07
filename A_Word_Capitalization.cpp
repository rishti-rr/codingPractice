#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
         s[0]=(char)toupper(s[0]);
    }
    cout<<s<<endl;
}