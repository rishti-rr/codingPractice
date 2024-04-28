#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,i;
    cin>>r;
        if(r%10==4 && r%10==7){
            r/=10;
        }
        else{
            if(r%4==0 || r%7==0 || r%47==0 || r%74==0 || r%447==0 || 
            r%477==0 || r%777==0 || r%744==0 || r%774==0 || r%444==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
}