#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,b=1,s=0;
    cin>>k>>n>>w;
    for(int i=0;i<w;i++)
    {
    	s+=(k*b);
    	b++;
    }
    if(s<=n) cout<<"0"<<endl;
    else
    cout<<(s-n)<<endl;
    return 0;
}