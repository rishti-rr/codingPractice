#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>r;
    for(int i=0; i<4; i++){
    	int a;
    	cin>>a;
    	r.insert(a);
    }
   cout<<4-r.size();
}