#include<iostream>
using namespace std;
//Area and Perimeter of Rectangle
//Input length and breadth and calculate both.
int main(){
    float length,breadth,area,perimeter;
    cout<<"Enter length and breadth of rectangle:";
    cin>>length>>breadth;
    area = length * breadth;
    perimeter = 2* (length + breadth);
    cout<<"Area of rectangle = "<<area<<endl;
    cout<<"perimeter of rectangle = "<<perimeter<<endl;
    return 0;
}