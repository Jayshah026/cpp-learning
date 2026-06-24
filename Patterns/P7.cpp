#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i * 2 - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Ok here what we have to do is 
// in the i we will print the row which is obvious now in the 
// j we will print the number 
// and in the k we will print the space for that what should we doing is that here
// we will need 3 loops and also for them we have to do a math for each 

// 4 1 4
// 3 3 3 
// 2 5 2
// 1 7 1 
// 0 9 0 

// so here this is in the reverse order form both side which are 0 to 4 so to print them what we can do is 
// j <= n - i - 1
// here n will be the total rows number i will be current row and the 1 is 1 no change 