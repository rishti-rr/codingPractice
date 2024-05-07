#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
    	if(a[i]){
            count++;
        }
    }
    if(count>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}