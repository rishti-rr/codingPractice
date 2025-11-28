#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        long a, b, c, d; 
        cin>>a>>b>>c>>d;
        int x = 0;
        if (b > a)
            x++;
        if (c > a)
            x++;
        if (d > a)
            x++;
 
    cout<<x<<endl;
}
}