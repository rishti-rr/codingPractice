#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int b,c,h;
          cin>>b>>c>>h;
          int k=c+h;
          if(b>k){
               cout<<k+(k+1)<<endl;
          }
          else{
               cout<<b+(b-1)<<endl;
          }
     }
     return 0;
}