#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double d;
    cin>>n;
    d=sqrt(1-(4*(-2*n)));
    if(d==(int)d) {
        cout<<"YES"<<endl;
        }
    else {
        cout<<"NO"<<endl;
    }
}