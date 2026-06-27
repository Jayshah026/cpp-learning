## Anatomy of C++ program 

```C++

#include<iostream>
using namespace std;

int main(){
    cout << "Hello World";
    return 0;
}


1. #include<iostream> : 

- This line is basically allow to be taken input/output with the use of cout and cin.

2. using namespace std; : 

- cout, cin, endl belong to something called the standard namespace.

- Without this we would be writing.. 
ex : std::cout << "Hello world"
- With this we are writing..
ex : cout << "Hello world"


3. main() : 

- The execution will start from this function. 
- If there is no main function in the code then our function will never executes.

4. return 0; : 

- This is basically means that our program is executed successsully.

This is how C++ programs works.