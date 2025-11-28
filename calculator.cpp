#include <iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Input a number: "<<endl;
    cin>>a>>b;

    char op;
    cout<<"Input an operator: "<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

 

        default:
        cout<<"Use another operator"<<endl;

    }
    return 0;
}