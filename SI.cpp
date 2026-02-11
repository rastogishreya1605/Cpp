// Write a C++ program to calculate the simple interest 

#include <iostream>
using namespace std;
int main(){
    int p,r,t;
    cout << "Enter principle, rate, time here: " << endl;
    cin >> p >> r >> t;
    cout << "Simple interest is: " << (p*r*t)/100;
}
