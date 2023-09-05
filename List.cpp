#include<bits/stdc++.h>
using namespace std;

void explainList(list<int>ls){
    list<int>::iterator it;
    for(it = ls.begin(); it != ls.end(); it++){
        cout << *(it) << " ";
    }
    
}

int main() {

    list<int>ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.emplace_back(40);
    ls.push_front(50);
    ls.push_front(60);

    cout << "Elements of the list are: " << endl;
    explainList(ls);


    cout << "\nReversing the list: " << endl;
    ls.reverse();
    explainList(ls);

    cout << "\nSorting the list: " << endl;
    ls.sort();
    explainList(ls);

    return 0;
}