#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    string r="codeforces";
    int output=0;
    for(int i=0; i<r.length(); i++){
        if(s[i]!=r[i]){
            output++;
        }
    }
    cout<<output<<endl;
    }
}