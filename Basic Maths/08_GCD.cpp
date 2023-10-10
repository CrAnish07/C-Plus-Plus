#include<bits/stdc++.h>
using namespace std;

void printGCD(int N1, int N2){
    int GCD = 1;
    for (int i = min(N1,N2); i >= 1; i--){
        if(N1%i == 0 && N2%i == 0){
            cout << "GCD of the two number is: " << i << endl;
            break;
        }
    }
}

int main(){
    int N1, N2;
    cout << "Enter two number: ";
    cin >> N1 >> N2;
    printGCD(N1, N2);
    return 0;
}