#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5, 100);
    v.push_back(54);
    v.emplace_back(432);
    v.insert(v.begin(), 302);

    v[1] = 335;
    v[2] = 34;
    

    for(int num : v){
        cout << num << endl;
    }

    return 0;
}