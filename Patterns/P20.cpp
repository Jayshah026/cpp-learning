/*To print this pattern : 

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int spaces = 2 * n - 2;

    for(int i = 1; i <= 2 * n - 1; i++){
        int stars = i;
        if(i > n){
            stars = 2 * n - i;
        }
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        for(int k = 1; k <= spaces; k++){
            cout << " ";
        }
        for (int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
        if(i < n){
            spaces -= 2;
        }else{
            spaces += 2;
        }
    }
    return 0;
}

/*
- Here we have taken space 8 as a default. 
- Now for the first half we have use normal for loop and conditions but for other half..
- We have take 8 as a default space, now if n > i then the space will decreses.
- If not then the space will increses. 
*/
