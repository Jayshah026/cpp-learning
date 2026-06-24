/*
Here what we have done in this file..

- Declared the vector.
- Add elements first using index. 
- The added elements using "push_back" and "emplace_back" and the display the vector

Now the Iterator : 

- In this first we have deleted the 2nd and 3rd indexes using "v.erase(v.begin() + 2, v.begin() + 4);" Here the + 2 means the index 2 and here the + 4 means until it, 
do the job so the elements will be deleted between 2 and 4 which is 3.

- After that we have deleted the last element using "v.pop_back". Here this will delete the last element. And then we printed the new vector. 
*/

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


/*
OUTPUT : 

1  
2
3
4
5
7
8
After updating the value : 
1
2
5
7
*/