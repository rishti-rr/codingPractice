#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,a=0,b=0;
	cin>>n>>h;
	int r[n];
	for(int i=0; i<n; i++){
		cin>>r[i];
	}
    for(int i=0;i<n;i++){
    	if(r[i]<=h){
            a++;
        }
    	else{
            b++;
        }
    }
    cout<<a+(b*2)<<endl;
}
