#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> mp;

    mp[1] = 2; // Here 1 is the key and 2 is the value

    mp.insert({2,3});

    mp.insert({3,4});

    return 0;
}