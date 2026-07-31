#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,6,7,2,3,4,88,6,33,44,33,33};

    auto max = max_element(v.begin(), v.end());
    cout << *max << endl;

    auto min = min_element(v.begin(), v.end());
    cout << *min << endl;

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;

    int count_num = count(v.begin(), v.end(), 33);
    cout << count_num;

    auto it = find(v.begin(), v.end(), 88);
    if(it != v.end()){
        cout << "The element is found : " << it - v.begin();
    }
}