#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int sum = 0;

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int original = n;

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        sum += lastdigit * lastdigit * lastdigit;
    }

    if(original == sum){
        cout << "It's an Armstrong number";
    }
    else{
        cout << "It's not an Armstrong number";
    }
    return 0;
}