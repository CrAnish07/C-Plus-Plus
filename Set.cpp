#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int>st;
    for(int i = 1; i <= 5; i++){
        st.insert(i);
    }
    cout << "Element of the set are: " << endl;
    for(auto it = st.begin(); it != st.end(); it++){
        cout << *(it) << " ";
    }
    return 0;
}