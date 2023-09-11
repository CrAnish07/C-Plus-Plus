#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cout << "Enter a number: ";
    cin >> N;
    int revNum = 0;

    while (N > 0)
    {
        int lastDigit = N%10;
        N = N/10;
        revNum = (revNum*10) + lastDigit;
    }
    cout << "Reverse of the given number is: " << revNum;
    return 0;
}