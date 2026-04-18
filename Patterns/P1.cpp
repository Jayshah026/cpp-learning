/* To print this pattern :  

*****
*****
*****
*****
*****

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// Here i is representing the row number. Now the first loop which is starting with i will handle the row numbers step by step. 
// Now Here 2nd for loop which is starting form the j will print the * step by step.
