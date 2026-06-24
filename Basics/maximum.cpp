#include<iostream>
using namespace std;

void max(int a, int b){
    if(a > b){
        cout << a;
    }else{
        cout << b;
    }
}

int main(){
    int a, b;
    cout << "Enter the numbers to compare : ";
    cin >> a >> b;

    cout << "The maximum number is : ";
    max(a, b);
}