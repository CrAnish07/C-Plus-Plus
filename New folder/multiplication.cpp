#include<bits/stdc++.h>
using namespace std;

#define r1 2
#define c1 2
#define r2 2
#define c2 2

void multiplication(int a[r1][c1], int b[r2][c2]) {
    int c[r1][c2];
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for(int k = 0; k < r2; k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

int main() {

    return 0;
}