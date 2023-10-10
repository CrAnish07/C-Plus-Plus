#include<bits/stdc++.h>
using namespace std;

void gcd(int a, int b){
    while(a>0 && b>0){
        if (a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0){
        cout << "gcd is: " << b << endl;
    }
    else {
        cout << "gcd is: " << a << endl;
    }
}

int main() {
    gcd(52, 10);
    return 0;
}