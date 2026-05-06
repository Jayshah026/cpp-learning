#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int count = 0;
    int  n;
    cout << "Enter the number : ";
    cin >> n;

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        count += 1;   
    }
    cout << "Total number in the digit : " << count;
    return 0;
}



OUTPUT : 

Enter the number : 2324312
Total number in the digit : 7
