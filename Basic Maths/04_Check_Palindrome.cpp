#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    int dup = N;
    int revNum = 0;
    while(N > 0) {
        int lastDigit = N%10;
        N = N/10;
        revNum = (revNum*10) + lastDigit;
    }
    if (revNum == dup) {
        cout << "Yes, the number is Palindrome!";
    }
    else {
        cout << "No, the number is not Palindrome!";
    }
}
