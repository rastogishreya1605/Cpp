// Write a C++ program to input a number and reverse it using a for loop.

#include <iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout << "Enter any number here: ";
    cin >> n;
    for(int i=n;i>0;i=i/10){
        int rem=i%10;
        rev=rev*10+rem;
    }
    cout << rev;
}