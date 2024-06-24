#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r[6][6],s=0;
    for(int i=1; i<=5; i++)
        for(int j=1; j<=5; j++)
        {
            cin>>r[i][j];
            if(r[i][j]==1){
                s=abs(3-i)+abs(3-j);
            }
        }
    cout<<s<<endl;
    return 0;
}