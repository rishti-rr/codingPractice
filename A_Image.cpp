#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	set<char> sr;
    	char x;
    	for(int i=0;i<4;i++)
    	{
    		cin>>x;
    		sr.insert(x);
    	}
    	int k=sr.size();
    	if(k==4){
        cout<<"3"<<endl;
        }
    	else if(k==3){ 
        cout<<"2"<<endl;
        }
    	else if(k==2){ 
        cout<<"1"<<endl;
        }
    	else if(k==1){ 
        cout<<"0"<<endl;
        }	
    }
}