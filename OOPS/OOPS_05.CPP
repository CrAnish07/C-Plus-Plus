#include<bits/stdc++.h>
using namespace std;

// Swallow Copy and Deep Copy

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
        cout << endl;
        cout << "[ Name : " << this->name << ", ";
        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this->level << " ]" << endl;
    }
    void setname(char name[]){
        strcpy(this->name , name);

    }
};

int main() {

    Hero hero1;
    hero1.setlevel('D');
    hero1.sethealth(12);
    char name[7] = "Anish";
    hero1.setname(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    return 0;
}

