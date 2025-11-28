#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,a,b;
   cin>>n>>a>>b;
   int count=0;
   for(int i=1; i<=n; i++){
   	   if(n-a<=i && b+1<=i){
        count++;
       }
    }
   cout<<count<<endl;
}

