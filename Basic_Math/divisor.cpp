#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number  : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}


OUTPUT : 

Enter a number  : 88
1
2
4
8
11
22
44
88
