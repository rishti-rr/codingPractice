#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,div;
    cin>>n>>k;
    if(n%2==0)
    {
        div=n/2;
    }
    else
    {
        div=n/2+1;
    }
    if(k>div)
    {
        cout<<(k-div)*2<<endl;
    }
    else
    {
        cout<<2*k-1<<endl;
    }
}