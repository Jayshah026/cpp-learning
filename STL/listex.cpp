#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls(5, 10);

    ls.push_back(100);
    ls.emplace_back(200);

    ls.push_front(111);
    ls.emplace_front(222);

    for(int i : ls){
        cout << i << endl;
    }
    
    return 0;
}