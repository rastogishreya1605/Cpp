// Write a C++ program that takes the cost of three items—a pencil, a pen,and an eraser—from the user using the float data type, and then calculates and displays the total cost as the final bill.

#include <iostream>
using namespace std;
int main(){
    float a,b,c,price,total;
    cout << "Enter three prices for pencil,pen and eraser: ";
    cin >> a >>b >> c;
    price=a+b+c;
    total=price+(price*0.18);
    cout << total;
}