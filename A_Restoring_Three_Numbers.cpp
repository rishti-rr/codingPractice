#include <bits/stdc++.h>
using namespace std ;

int main(){
    int r[4];
    int i;
    for(i=0; i<4; i++){
        cin>>r[i];
    }
    sort(r,r+4);
    int c=r[3]-r[0];
    int b=r[1]-c;
    int a=r[2]-c;

    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}