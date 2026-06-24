#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << " " << endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n - i + 1; j++){
//             cout << "*";
//         }
//         cout << " " << endl;
//     }
//     return 0;
// }

// Here i = 1 to n now if i want to print 
// *****
// ****
// ***
// **
// *
// Then i should be starting with i = n right? 