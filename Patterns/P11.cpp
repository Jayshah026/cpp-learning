/*To print this pattern : 

1
01
101
0101
10101       

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int start = 1;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            start = 1;
        }else{
            start = 0;
        }
        for(int j = 1; j <= i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    return 0;
}

/*

- Here in this we have taken one element which is start. Now here we have give the condition if i means row number is odd then print 1 else 0. 
- After that we have write 1st loop which will print the row number. Ex: if we have write 5 as an input then that will print 1 to 5 elements.
- Now after that first if the row number is odd then the first element will be the 1 if even then it will be 0. 
- After given condition we have applied the 2md loop in which we will print the other numbers for that we have give simple codition. 
- Now in that if the i = 2 then it will print 0 0 but we want to print 0 1 so for that we have one more condition at the end which will convert the numbers form 
1 to 0 and 0 to 1. It will help us to print the pattern we want. If we don't apply this condition then it will print only one number for i times. And the first
number is always fix so for other number this "Start = 1 - Start". 

*/ 
