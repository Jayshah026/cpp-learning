#include<iostream>
using namespace std;

void printnum(int i, int n){
    if(i > n){
        return;
    }else{
        cout << n << endl;
        printnum(i, n - 1);
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    printnum(1, n);
    return 0;
}