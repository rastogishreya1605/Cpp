// Write a C++ program to input withdrawal amount and balance and Amount must be multiple of 100 Sufficient balance should be available

#include <iostream>
using namespace std;
int main() {
    int amount, balance;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter balance: ";
    cin >> balance;
    if (amount % 100 == 0 && amount <= balance) {
        cout << "Withdrawal successful";
    } else {
        cout << "Withdrawal failed";
    }
}
