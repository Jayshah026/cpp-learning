#include<iostream>
using namespace std;

void printnum(int i, int n){
    if(i > n){
        return;
    }else{
        cout << i << endl;
        printnum(i + 1, n);
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    printnum(1, n);
    return 0;
}

/*
OUTPUT :

Enter a number : 5
1
2
3
4
5
*/