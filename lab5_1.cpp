#include<iostream>
using namespace std;

int main(){
    int evenAmount = 0, oddAmount = 0;
    int tempInteger;
    while (true)
    {
        cout << "Enter an integer: ";
        cin >> tempInteger;
        if (tempInteger == 0) break;
        else if (tempInteger % 2 == 0) evenAmount++;
        else oddAmount++;
    }
    cout << "#Even numbers = " << evenAmount << endl;
    cout << "#Odd numbers = " << oddAmount;
    return 0;
}
