#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,w,e,r,t,count=0;
    cin>>q>>w>>e>>r>>t;
    if(q==1 || w==1 || e==1 || r==1){
    	cout<<t<<endl;
    }
    else{
    for(int i=1; i<=t; i++){
    	if(i%q==0 || i%w==0 || i%e==0 || i%r==0){
            continue;
            }
    	else{
            count++;
        }
      }
      cout<<(t-count)<<endl;
	}	
}
