#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int hour=a;
    while(a>=b)
    {
        hour=hour+(a/b);
        a=(a/b)+(a%b);
    }
    cout<<hour<<endl;
}