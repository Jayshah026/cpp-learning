#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = i;
        for(int k = 1; k <= 2 * i - 1; k++){
            cout << ch;
            if(k < breakpoint) ch++;
            else ch--;
        }
        cout << endl;
    }
        return 0;
}