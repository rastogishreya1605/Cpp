#include <iostream>
using namespace std;
int main(){
    int ch;
    cout << "Enter any character: ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << "Lower Case";
    }
    else{
        cout << "Upper Case";
    }
}