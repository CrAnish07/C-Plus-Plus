#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int>v;
    for(int i = 1; i <= 10; i++){
        v.push_back(i);
    }
    cout << "The elements in the vector : " << endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    

}

int main() {

    explainVector();

    return 0;
}