#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        int a[3] = {x1, x2, x3};
        sort(a,a+3);
        int m=a[1];
        int d = abs(m-x1) + abs(m-x2) + abs(m-x3);
        cout<<d<<endl;
    }
    return 0;
}
