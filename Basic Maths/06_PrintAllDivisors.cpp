#include<bits/stdc++.h>
using namespace std;

void printDivisor(int N){
    for (int i = 1; i <= N; i++){
        if(N%i == 0){
            cout << i << ',' << " ";
        }
    }
}

int main(){
    int N;
    cout << "Enter the number: ";
    cin >> N;
    printDivisor(N);
    return 0;
}