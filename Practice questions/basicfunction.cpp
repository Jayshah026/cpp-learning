#include<iostream>
using namespace std;

int Arithmatic(int a, int b, int c){
    return a + b + c;
}

int main(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "The sum of the elements you have entered is : " << Arithmatic(a, b, c);

    return 0;
}