#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cout << "Enter a number: " << endl;
    cin >> N;

    while (N > 0)
    {
        cout << N%10 << " ";
        N = N/10;
    }
    return 0;
}