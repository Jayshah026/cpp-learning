/*To print this pattern : 

**********
**** ****
***   ***
**     **
*       *
*        *
**      **
***    ***
****  ****
**********

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int inis = 0;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        for(int k = 1; k < inis; k++){
            cout << " ";
        }
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        inis += 2;
        cout << endl;
}

        int inis1 = 8;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            for(int k = 0; k < inis1; k++){
                cout << " ";
            }
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            inis1 -= 2;
            cout << endl;
        }
    
    return 0;
}
