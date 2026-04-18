/*To print this pattern : 
1      1
12    21
123  321
12344321    */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
            }
            for(int k = 1; k <= (n * 2) - i * 2; k++){
                cout << " ";
            }
            for(int a = i; a >= 1; a--){
                cout << a;
            }
            cout << endl;
        }
        return 0;
    }
