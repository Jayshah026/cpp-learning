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
    cout << fibonacciNum(10);
    return 0;
}