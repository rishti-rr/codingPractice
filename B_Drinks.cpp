#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x;
    cin>>n;
    double sum=0,ans;
    for(i=0; i<n; i++){
        cin>>x;
        sum+=x;
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
}