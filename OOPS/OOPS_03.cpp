#include<bits/stdc++.h>
using namespace std;

// Static vs Dynamic Allocation

class Hero{
    public :
    int health;
    char level;
};

int main() {
    // Static Alloction
    Hero a; 
    a.health = 70;
    a.level = 'A';
    cout << "Health is: " << a.health << endl;
    cout << "Level is: " << a.level << endl;



    // Dynamic Allocation                 
    Hero *b = new Hero;    
    b->health = 80;
    b->level = 'C'; 
    // (*b).health = 80;
    // (*b).level = 'C';


    cout << "Health is: " << b->health << endl;
    cout << "Level is: " << b->level << endl; 
    // cout << "Health is: " << (*b).health << endl;
    // cout << "Level is: " << (*b).level << endl; 
    return 0;
}