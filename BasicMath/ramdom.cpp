#include<iostream>
using namespace std;

int main(){
    int rev = 0;
    int lastdigit;
    int n;
    cout << "Enter a num : ";
    cin >> n;
    int original = n;

    while(n > 0){
        lastdigit = n % 10;
        n = n /10;
        cout << lastdigit;
        cout << "\n";
        rev = (rev * 10) + lastdigit;
    }
    cout << rev;
    return 0;
}