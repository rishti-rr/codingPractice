#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,s,u,d,b,i;
    cin>>r>>s;
    if(r>s) {
        b=r;
        }
    else {
        b=s;
        }
    u=(6-b)+1;
    d=6;
    for(i=1; i<=6; i++)
    {
        if(u%i==0 && d%i==0) {
            u=u/i;
            d=d/i;
            }
    }
    cout<<u<<"/"<<d;
    return 0;
}