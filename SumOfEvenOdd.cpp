// Sum of even and odd numbers from 1 to N

#include <iostream>
using namespace std;
int main() {
    int n, evenSum = 0, oddSum = 0;
    cout << "Enter value of N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }
    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers  = " << oddSum << endl;
}
