// Write a C++ program to input a number and count how many digits it has using a for loop-

#include <iostream>
using namespace std;
int main(){
    int num;
    int a=0;
    cout << "Enter Any Digit Here: ";
    cin >> num;
    for(int i=num;i>0;i=i/10){
        a=a+1;
    }
    cout << a;
}