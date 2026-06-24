#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int  n;
    int rev = 0;
    cout << "Enter the number : ";
    cin >> n;

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastdigit;    
    }
    cout << rev;
    return 0;
}