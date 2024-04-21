#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int rrr;
        cin>>rrr;
        if(rrr>=1900){
            cout<<"Division 1"<<endl;
        }
        else if(rrr>=1600 && rrr<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(rrr>=1400 && rrr<=1599){
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }
}
