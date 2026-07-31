#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {4,42,54,123,7,890,13,51,131,89};

    sort(v.begin(), v.end(), greater<int>());
    for(int i : v){
        cout << i << endl;
    }

    cout << "----------------------------" << endl;

    sort(v.begin(), v.end());
    for(int i : v){
        cout << i << endl;
    }

    cout << "----------------------------" << endl;

    reverse(v.begin(), v.end());
    for(int i : v){
        cout << i << endl;
    }

    cout << "----------------------------" << endl;

    rotate(v.begin(), v.begin() + 3 , v.end());
    for(int i : v){
        cout << i << endl;
    }
}


/*
OUTPUT : 

890
131
123
89
54
51
42
13
7
4
----------------------------
4
7
13
42
51
54
89
123
131
890
----------------------------
890
131
123
89
54
51
42
13
7
4
----------------------------
89
54
51
42
13
7
4
890
131
123
*/