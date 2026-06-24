#include<iostream>
using namespace std;

int fibonacciNum(int n){
    if(n <= 1){
        return n;
    }else{
        int last = fibonacciNum(n - 1);
        int second_last = fibonacciNum(n - 2);
        return last + second_last;
    }
}

int main(){
    cout << fibonacciNum(9);
    return 0;
}

/*
OUTPUT : 

34
Here if you want another output then you can change the number in main function which is right now is 9 but if you change it, the 
output will be changed too. 
*/