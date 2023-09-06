#include<bits/stdc++.h>
using namespace std;

class Hero{
    public :
    char name[100];
    int health;
    char level;
};

int main() {

    Hero Anish;
    Anish.health = 70;
    Anish.level = 'A';
    cout << "Health is: " << Anish.health << endl;
    cout << "Level is: " << Anish.level << endl;
    return 0;
}