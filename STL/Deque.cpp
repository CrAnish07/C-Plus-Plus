#include<bits/stdc++.h>
using namespace std;

void explainDeque(deque<int>dq){
    deque<int>::iterator it;
    for(auto it = dq.begin(); it != dq.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main() {
    deque<int>dq;
    dq.push_back(10);
    dq.emplace_back(20);
    dq.push_front(40);
    dq.emplace_front(30);
    dq.emplace_front(50);

    cout << "The deque elements are: " << endl;
    explainDeque(dq);

    cout << "Size of deque is: " << dq.size();
    cout << "\nFirst element is: " << dq.front();
    cout << "\nLast element is: " << dq.back();

    cout << "Deleting the first element: " << endl;
    dq.pop_front();
    explainDeque(dq);

    cout << "Deleting the last element: " << endl;
    dq.pop_back();
    explainDeque(dq);
}