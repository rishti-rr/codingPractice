#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int a[2],b[2],i;
    	for(i=0; i<2; i++){
            cin>>a[i];
            cin>>b[i];
            }
    	if(a[0]==1 && b[0]==1 && a[1]==1 && b[1]==1){
            cout<<"2"<<endl;
        }
    	else if(a[0]==0 && b[0]==0 && a[1]==0 && b[1]==0){
            cout<<"0"<<endl;
        }
    	else{
            cout<<"1"<<endl;
        }
    }
}