#include<iostream>
using namespace std;

int fact = 1;

void factorialofdigit(int i, int n){
    if(i > n){
        return;
    }else{
        fact *= i;
        sumofdigit(i + 1, n);
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    factorialofdigit(1, n);
    cout << "factorial of digits is : " << fact;
    return 0;
}


OUTPUT : 

Enter a number : 5
factorial of digits is : 120
