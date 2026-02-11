// Write a C++ program that takes the number of units consumed and 
// calculates the bill:
// If units <= 100 , ₹1/unit
// If units > 100 and <= 200 , ₹2/unit
// If units > 200 , ₹3/unit

#include <iostream>
using namespace std;
int main(){
    int unit,a;
    cout << "Enter unit here: ";
    cin >> unit;
    if(unit<=100){
        a=unit*1;
        cout << a;
    } 
    else if(unit>100 && unit<=200){
        a=unit*2;
        cout << a;
    }
    else{
        a=unit*3;
        cout << a;
    }
}