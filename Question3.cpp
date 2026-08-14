#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two number:";
    char op;
    cin >> a >>b;
    switch(op){
        
            case'+':
            cout<< a + b;
            break;
        
            case'-':
            cout<< a - b;
            break;

            case'*':
            cout<< a * b;
            break;

            case'/':
            cout<< a / b;
            break;

            default:
            cout<<"Invalid operator";
    }
    return 0;
}