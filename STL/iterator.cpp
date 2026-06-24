#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5, 1);

    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;

    v.push_back(7);
    v.emplace_back(8);

    for(int i : v){
        cout << i << endl;
    }

    cout << "After updating the value : " << endl;

    v.erase(v.begin() + 2, v.begin() + 4);
    v.pop_back();

    for(int num : v){
        cout << num << endl;
    }

    return 0;
}