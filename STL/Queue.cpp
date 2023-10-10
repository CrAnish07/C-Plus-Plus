#include<bits/stdc++.h>
using namespace std;

void explainQueue(queue<int>q1){
    queue<int> q2 = q1;
    while(! q2.empty()){
        cout << q2.front() << endl;
        q2.pop();
    }
}

int main() {

    queue<int>q;
    for(int i = 1; i <= 5; i++){
        q.push(i);
    }

    cout << "Elements of Queue are: " << endl;
    explainQueue(q);

    cout << "\nFront element is: " << q.front();
    cout << "\nLast element is: " << q.back();
    cout << "\nDeleting the front element: " << endl;
    q.pop();
    explainQueue(q);

    return 0;
}