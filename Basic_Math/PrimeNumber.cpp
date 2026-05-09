#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
        if(count == 2){
            cout << "Prime number";
        }else{
            cout << "Not a prime number";
        }
    return 0;
}


OUTPUT : 


Enter a number : 67
Prime number

Enter a number : 77
Not a prime number
