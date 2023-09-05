#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    int a[] = {1,3,9,6,2,5};
    int n = sizeof(a)/sizeof(int);

    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout <<a[i] <<" ";
    }

    return 0;
}