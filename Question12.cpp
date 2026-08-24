#include<iostream>
using namespace std;
//Count Digits ⭐
//Input a number and count how many digits it contains.
int main(){
    int n, count = 0;
    cout<<"Enter a number:";
    cin>>n;
    while(n > 0){
        n = n / 10;
        count++;
    }
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}