/*To print this pattern : 

****
*  *
*  *
****

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                 cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
- Here as we can see this code will print this pattern which is square pattern and in inside it there is nothing. 
- Now how this works? So here we have taken 2 conditions.
- 1. For the row. Now if the row is 0th and 3rd then only print * other wise in the 1st and 2nd row will be empty. 
- 2. For column. Now if the column is 0th or 3rd then only print the * otherwise spaces. 
- So form this 2 condition we can see that only outer elements are printed  not inside ones. 

- Visual representation : 

0,0  0,1  0,2  0,3
1,0  1,1  1,2  1,3 
2,0  2,1  2,2  2,3
3,0  3,1  3,2  3,3 

Now as you can see this representation here..

1. Row is the 0th row, and 3rd row will be printed

*  *  *  *


*  *  *  *

2. Column is the 0th and 3rd columns will be printed 

*              *

*              *

*              *

*              *

Now when we combine this it becomes : 

*  *  *  * 

*        *

*        *

*  *  *  *

So this is how we can print the square pattern with the help of index numbers. 
*/
