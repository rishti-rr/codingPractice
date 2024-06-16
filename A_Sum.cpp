#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0; i<=20; i++){
             int a,b,c;
            cin>>a>>b>>c;
            if((a+b)==c){
                cout<<"YES"<<endl;
                break;
            }
            else if((b+c)==a){               
                cout<<"YES"<<endl;
                break;
            }
            else if((a+c)==b){               
                cout<<"YES"<<endl;
                break;
            }
            else{               
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}