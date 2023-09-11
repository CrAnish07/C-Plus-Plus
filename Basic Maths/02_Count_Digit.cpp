#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cout << "Enter a number: " ;
    cin >> N;
    int count = 0;

    while (N > 0)
    {
        int lastDigit = N%10;
        count = count + 1;
        N = N/10;
    }
    cout << "Total digit of the number is: " << count;



    // Second Method

    // int count = (int)(log10(N) + 1);
    // cout << "Total digit of the number is: " << count;

    return 0;
}