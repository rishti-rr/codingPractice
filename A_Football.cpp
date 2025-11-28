#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string a;
    cin>>a;
    for(int i=0; i<a.length(); i++){
        if(a[i]==a[i+1]){
            count++;
        }
        else{
            count=0;
        }
        if((count+1 )>=7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
