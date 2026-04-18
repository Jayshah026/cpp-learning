/*To print this pattern : 

A
AB
ABC
ABCD
ABCDE         

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(char j = 'A'; j <= 'A' + i ; j++){
                cout << j;
        }
            cout << endl;
   }
        return 0;
}

// Here if i have written "j <= 'A' + i" Then the output will be starting form AB not form the A.
