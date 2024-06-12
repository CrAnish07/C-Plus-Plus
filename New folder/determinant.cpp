#include<bits/stdc++.h>
using namespace std;

int determinant(int matrix[10][10], int n) {
    int det = 0;
    int subMatrix[10][10];

    if(n == 2) {
        det = (matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]);
        return det;
    }
    else {
        
    }
}

int main() {

    return 0;
}