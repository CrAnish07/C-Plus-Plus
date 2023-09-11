#include<bits/stdc++.h>
using namespace std;

void printGCD(int N1, int N2){
    for (int i = 1; i <= N1; i++){
        if(N1%i == 0 && N2%i == 0){
            cout << "GCD of the numbers is" << i << endl;
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