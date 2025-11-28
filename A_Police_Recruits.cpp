#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,u,police=0,crime=0;
    cin>>n;
    while(n--){
        cin>>u;
        if(u==-1){
            if(police>0){
                police--;
            }
            else{
                crime++;
            }
        }
        else
            police+=u;
    }
    cout<<crime<<endl;
    return 0;
}