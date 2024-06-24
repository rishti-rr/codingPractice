#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,move;
    cin>>m>>n;
    i=m*n;
    if(m>n){
        move=i/m;
        } 
    else{
        move=i/n;
    }
    if(move%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
return 0;
}