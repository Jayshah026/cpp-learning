/* What we have done in this

- How to declare list.
- How to insert values at the back.
- How to insert values at the fornt.
- How to show the values using for loop.
*/


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


/*
OUTPUT : 

222
111
10
10
10
10
10
100
200
*/