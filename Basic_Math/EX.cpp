#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int  n;
    cout << "Enter the number :";
    cin >> n;

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        cout << lastdigit << endl; 
    }
    return 0;
}



OUTPUT : 

Enter the number : 1234
4
3
2
1

  
  
EXPLANATION : 

Here we take the number 1234. 

Now 1st Iteration : 
1234 % 10 = 4 (Remainder)
1234 / 10 = 123

Now 2nd Iteration : 
123 % 10 = 3 (Remainder)
123 / 10 = 12

Now 3rd Iteration : 
12 % 10 = 2 (Remainder)
12 / 10 = 1

Now 4th Iteration : 
1 % 10 = 1 (Remainder)
1 /10 = 0

Now 5th Iteration : 
0 which is not follow "n > 0" Condition. So here the iteration will be end and the remainder will be the answer here. 

- Here we are taking the integer values only that's why all values here will be in the integer form not in float or any other form. 
- That's why when we have value 123.4 after doing 1234 / 10 we only take 123 instead of 123.4
- This will follow in entire code. 
