#include<bits/stdc++.h>
using namespace std;

int countDigit(int N){
    int count = 0;
    while (N > 0)
    {
        int lastDigit = N%10;
        count = count + 1;
        N = N/10;
    }
    return count;
}

int main() {

    int N;
    cout << "Enter a number: " ;
    cin >> N;
    int dup = N;
    int sum = 0;
    int newCount = countDigit(N);

    while (N > 0)
    {
        int lastDigit = N%10;
        N = N/10;
        sum = sum + pow(lastDigit, newCount);
    }
    if (sum == dup) {
        cout << "The number is Armstrong";
    }
    else {
        cout << "The number is not Armstrong";
    }
    
    return 0;
}