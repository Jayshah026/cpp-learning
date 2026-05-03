/*
Here What we will learn.. 

- How to declare the vector. 
- How to replace values.
- How to insert values using "push_back" and "emplace_back". 
- How to show the values of the vector using for loop. 
*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5, 100);
    v.push_back(54);
    v.emplace_back(432);

    v[0] = 34;
    v[1] = 335;

    for(int num : v){
        cout << num << endl;
    }

    return 0;
}


OUTPUT : 

34 
335
100
100
100
54
432
