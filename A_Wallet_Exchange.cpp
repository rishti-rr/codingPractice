#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(abs(a-b)%2!=0){
			cout<<"Alice"<<endl;
		}
		else{
			cout<<"Bob"<<endl;
		}
	}
	return 0;
}