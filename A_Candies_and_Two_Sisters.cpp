#include <iostream>
#include<cmath>
using namespace std;
 int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        if(a>0&&b>0){
        int sum=0;
        double n;
        cin>>n;
        sum=a+b;
        sum=ceil((n/2)-1);
        cout<<sum<<endl;
    }
    }
    return 0;
 }