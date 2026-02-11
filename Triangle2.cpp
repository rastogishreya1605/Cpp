// Write a C++ program that takes the three sides of a triangle as input and checks whether they can form a valid triangle or not.

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid Triangle";
    } else {
        cout << "Not a Valid Triangle";
    }
    return 0;
}
