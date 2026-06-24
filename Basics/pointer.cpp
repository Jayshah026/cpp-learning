#include<iostream>
using namespace std;

int main(){
    int a = 200;
    int *add = &a;        // Here *add = &a.. Means it will store the address of the variable and also the value inside it.

    cout << *add << endl;  // Here *add will give me the value inside that address.
    cout << add << endl;   // Here add will give me the address of that value.
    cout << a << endl;
    cout << &a;

    return 0;
}


// Pointer can only be used when we store address and value with * on the left side and & on the right side. 
// This way the address will be stored in normal variable without * and with * it will store value. 
// Here on the right side if we don't do the & then we can not take any vlaue and also not any addresses too.