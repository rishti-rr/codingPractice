#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    long double n,m,a,x,y,temp;
    cin>>n>>m>>a;
    x=n/a;
    y=m/a;
 cout.precision(32);
   
    if(m<=a){
        cout<<ceil(x)<<endl;
    }
    else{
        cout<<ceil(x)*ceil(y)<<endl;
    }
    return 0;
}