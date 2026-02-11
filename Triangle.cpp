// Write a C++ program that takes the three sides of a triangle as input and checks whether the triangle is a right-angled triangle or not.

#include <iostream>
using namespace std;
int main(){
    int h,b,p;
    cout << "Enter Hypothesis, Base, Perpendicular: ";
    cin >> h >> b >> p;
    if(h*h == b*b + p*p){
        cout << "This is right angle triangle";
    }
    else{
        cout << "This is not right angle triangle.";
    }

}