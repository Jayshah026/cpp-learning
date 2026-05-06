#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int original;
    int rev = 0;
    int n;
    cout << "Enter a number : ";
    cin >> n;
    original = n;

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastdigit;
    }
    if(rev == original){
        cout << "It's a Palindrome number";
    }
    else{
        cout << "It's Not a Palindrome number";
    }
    return 0;
}


OUTPUT : 

Enter a number : 121
It's a Palindrome number

Enter a number : 12322
It's Not a Palindrome number
