// Write a C++ program to input three numbers and determine the largest among them using if-else .

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter three numbers for find largest number: ";
    cin >> a >> b >> c;
    if(a>b && a>c){
        cout << a << " a is largest number";
    }
    else if(b>a && b>c){
        cout << b << " b is largest number";
    }
    else{
        cout << c << " c is largest number";
    }      
}