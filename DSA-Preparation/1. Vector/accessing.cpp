#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    cout << "Frist element : " << v.front() << endl;
    cout << "random element : " << v[2] << endl;
    cout << "Last element : " << v.back() << endl;

    for(int i : v){
        cout << i << endl;
    }
}