/*To print this pattern : 

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

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

/*
- Here first understand how we can print the structure. For pyramid structure we have 3 loops, in first and second one is basic to print the spaces now 3rd for loop
is where we are going to print the character. 
- Now here for printing the character we have declared the "char ch = 'A'" variable which will print the A as a pyramid structure. 
- Now after that we have to print the pattern as above for that we have taken the mid point where characters are manipulated. 
- So here before anything happens in the code the A will alwasy print first then the process will go deep. 
- After printing A now codition will occure here we are talking about the 2nd row for the understanding. 

Here first A will  print. 
Now k = 1 and breakpoint is 2 so condition is true then it will increses so it will become B. 
Now the pattern is AB. 
After that k = 2. Now 2 < 2 is flase so the codition is flase and the ch will decreses "ch--" so it will print A again.
After A k = 3 which is k < breakpoint but here A is the last character so there will be no printing.
so now pattern is ABA now after that we are out of the loop and the final output is ABA which is required for the pattern. 
This is how we can print this pattern. 
*/
