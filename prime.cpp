#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a; num<=b; num++){
        int i;
    for(i=2; i<num; i++){
        if(num%i==0){
            cout<<"Not Prime"<<endl;
            cout<<num<<endl;
            break;
        }
    }
    
     if(i==num){
            cout<<"Prime"<<endl;
            cout<<num<<endl;
        }
    }      
    return 0;

}