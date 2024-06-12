#include<iostream>
using namespace std;


// Factorial of a number
int factorial(int n) {
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}


// Fibonacci Number
int fibonacci(int n){
    if(n <= 1){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}
int main() {
    
    int a;
    cout << "Enter a number: " <<endl;
    cin >> a;
    // cout << "The factoial is: " << factorial(a);

    cout << "The term in fibonacci sequence at position " <<a << " is " << fibonacci(a);
    return 0;
}
