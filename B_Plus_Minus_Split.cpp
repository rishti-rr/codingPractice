#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int a=0,b=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='+'){
            a++;
        }
        else{
            b++;
            
        }
    }
    cout<<abs(a-b)<<endl;
    }
    return 0;
}