// Write a C++ program to input a year and check whether it is a leap year or not.

#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "Enter year here: ";
    cin >> year;
    if (year % 4 == 0 && year % 100 !=0 || year % 400 ==0){
        cout << "Leap year";
    }
    else{
        cout << "Not Leap year";
    }
}