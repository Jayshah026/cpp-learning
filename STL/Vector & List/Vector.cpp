/*
Here What we will learn.. 

- How to declare the vector. 
- How to replace values.
- How to insert values using "push_back" and "emplace_back". 
- How to show the values of the vector using for loop. 
- Inserting an element at the fornt.
*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5, 100);
    v.push_back(54);
    v.emplace_back(432);
    v.insert(v.begin(), 302);

    v[2] = 34;
    v[1] = 335;

    for(int num : v){
        cout << num << endl;
    }

    return 0;
}


/*
OUTPUT : 

302
335
34
100
100
100
54
432
*/