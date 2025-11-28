#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    for(int i=0; i<=y; i++){
        y++;
        int y1,y2,y3,y4;
            y1 = y/1000;
            y2 = y/100%10;
            y3 = y/10%10;
            y4 = y%10;
            if(y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4){
            break;
           }        
        }
    cout<<y<<endl;
    return 0;
}