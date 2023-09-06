#include<bits/stdc++.h>
using namespace std;

// Getters & Setters

class Hero{
    public :
    char name[100];

    private :
    int health;

    public:
    char level;

    int gethealth(){
        return health;
    }
    char getlevel() {
        return level;
    }

    void sethealth(int h) {
        health = h;
    }
    void setlevel(char ch) {
        level = ch;
    }
};

int main() {

    Hero Anish;
    Anish.sethealth(70);
    Anish.setlevel('A');

    cout << "Health is: " << Anish.gethealth() << endl;
    cout << "Level is: " << Anish.getlevel();
    return 0;
}