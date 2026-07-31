#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8};

    v.push_back(9);
    v.push_back(0);

    v.pop_back();

    v.insert(v.begin() + 1, 45);
    v.erase(v.begin() + 2);

    for(int i : v){
        cout << i << endl;
    }

    v.resize(5);

    for(int j : v){
        cout << j << endl;
    }

    cout << "Is the vector is empty : " << v.empty();

    v.clear();
    cout << "The vector is empty now : " << v.size();
}