#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r,s;
    cin>>r>>s;
    for(int i=0;i<r.size();i++)
    {
        r[i]=toupper (r[i]);
        s[i]=toupper (s[i]);
    }

    if(r==s)
    {
            cout<<"0"<<endl;
    }
    else
    {
            for(int i=0;i<r.size();i++)
        {
            if(r[i]<s[i])
            {
                cout<<"-1"<<endl;
                break;
            }
            else if(r[i]>s[i])
            {
               cout<<"1"<<endl;
               break;
            }
            
        }
    }
    
}