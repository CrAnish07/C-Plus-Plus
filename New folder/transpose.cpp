#include<bits/stdc++.h>
using namespace std;

#define n 4

void transpose(int a[][n], int b[][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = a[i][j];
        }
    }
}

int main() {

    return 0;
}