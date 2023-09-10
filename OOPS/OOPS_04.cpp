#include<bits/stdc++.h>
using namespace std;

// Constructor

class Hero{
    private:
    int health;
    char level;
    char *name;

    public:

    Hero(){
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }
    Hero(int health){
        cout << "this ->" << this << endl;
        cout << "Constructor Called" << endl;
        this->health = health;
    }
    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    Hero (Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
    }

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
    void print(){
        cout << "Health ->" << health << endl;
        cout << "Level ->" << level << endl;
    }
    void setname(char name[]){
        strcpy(this->name , name);

    }
};

int main() {

    Hero Anish(10);
    cout << "Address of object is: " << &Anish << endl;

    Hero temp(22, 'A');
    Hero R(temp);
    R.print();

    return 0;
}