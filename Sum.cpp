// Write a program to find the sum of digits of a number

#include <iostream>
using namespace std;

int main() {
    int num,sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (num; num > 0; num = num / 10) {
        sum = sum + (num % 10);
    }
    cout << "Sum of digits = " << sum;
}
