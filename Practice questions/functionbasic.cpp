#include<iostream>
using namespace std;

int sum(int sum1, int sum2){
    int sum3 = sum1 + sum2;
    return sum3;
}

int main(){
    int a, b;
    cin >> a >> b;
    int c = sum(a, b);
    cout << c;
    return 0;
}