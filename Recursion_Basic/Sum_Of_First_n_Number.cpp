#include<iostream>
using namespace std;

int sum = 0;

void sumofdigit(int i, int n){
    if(i > n){
        return;
    }else{
        sum += i;
        sumofdigit(i + 1, n);
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    sumofdigit(1, n);
    cout << "Sum of digits is : " << sum;
    return 0;
}


OUTPUT : 

Enter a number : 3
Sum of digits is : 6
