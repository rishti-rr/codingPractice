#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count(0);
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]!=s[i-1]){
            count+=1;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}