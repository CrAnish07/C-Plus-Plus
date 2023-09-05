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

    cout << "\nSize of the list is: " << ls.size() << endl;

    cout << "\nFirst element of the list: " << ls.front() << endl;
    cout << "\nLast element of the list: " << ls.back() << endl;

    cout << "\nDeleting the last element of the list: " << endl;
    ls.pop_back();
    explainList(ls);

    cout << "\nDeleting the first element of the list: " << endl;
    ls.pop_front();
    explainList(ls);

    return 0;
}