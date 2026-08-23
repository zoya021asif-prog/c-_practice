#include<iostream>
using namespace std;

int main(){
    int a,b;
    char  op;
    cout<<"Enter first number:";
    cin>>a;

    cout<<"Enter operator (+,-,*,/):";
    cin>>op;

    cout<<"Enter two number:";
    cin>>b;

    if(op == '+'){
        cout<<"Result ="<<a + b <<endl;
    }
    else if(op == '-'){
        cout<<"Result = "<< a - b <<endl;
    }
    else if(op == '*'){
        cout<<"Result = "<< a * b <<endl; 

    }
    else if(op == '/'){
        cout<<"Result = "<< a / b <<endl;
    }
    else{
        cout<<"Invalid operator"<<endl;
    }

    return 0;
}