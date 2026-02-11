// Write a C++ program to print numbers from 1 to 20, but skip numbers divisible by 4 using a for loop.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any number here: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        if(i%4==0)continue;
        else cout << i <<" ";
    }        
}