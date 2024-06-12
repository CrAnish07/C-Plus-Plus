#include<bits/stdc++.h>
using namespace std;

#define n 4

void addition(int a[][n], int b[][n], int c[][n]) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {

    return 0;
}