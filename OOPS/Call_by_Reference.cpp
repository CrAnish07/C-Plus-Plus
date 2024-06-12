#include<iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}

// This will not swap a and b
void swap(int a, int b){ 
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference using Pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Reference using C++ Reference variable
void swapRefVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {

    int x = 4, y = 5;
    // cout << "The sum of 4 and 5 is: " << sum(4,5) ; 

    cout << "the value of x is " <<x << " The value of y is " <<y <<endl;

    // swap(x,y); //This will not swap a and b

    // swapPointer(&x, &y); //This will swap a and b

    swapRefVar(x,y);

    cout << "the value of x is " <<x << " The value of y is " <<y <<endl;
    return 0;
}