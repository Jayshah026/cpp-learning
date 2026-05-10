#include<iostream>
using namespace std;

void printname(int i, int n){
    if(i > n){
        return;
    }else{
    cout << "Jay Shah" << endl;
    printname(i + 1, n);
    }
}

int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;

    printname(1, n);
    return 0;
}


OUTPUT : 

Enter a number :3
Jay Shah
Jay Shah
Jay Shah
