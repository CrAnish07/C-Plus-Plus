#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNum(int n1, int n2) {
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex o1, Complex o2);

        void printNumber() {
            cout << "Your number is " << a << " + " << b <<"i" << endl ;
        }
};

class Calculator{
    public:
        int sum(int a, int b){
            return (a + b);
        }
        int sumRealComplex(Complex o1, Complex o2){
            return (o1.a + o2.a); 
        }
};

int main() {

    return 0;
}