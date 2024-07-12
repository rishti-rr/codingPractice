#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s;
    cin>>t;
    while(t--){
    int k[1001];
    int j=1;
    cin>>s;
    for(int i=1; i<1667; i++ ){
        if(i%3 != 0){
            if(i%10 != 3){
                k[j] = i;
                j = j+1;
            }
        }
    }
    cout<<k[s]<<endl;
    }
 return 0;
}