/*To print this pattern : 

*
**
***
****
*****
****
***
**
*                    

*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= 2 * n - 1; i++)
    int stars = i; 
    if(i > n)
      stars = 2 * n - i; 
      for(int j = 1; j <= stars; j++){
        cout << "*";
      }
  cout << endl;
}
return 0;
}

/* 

- Here first to print first n numbers we have used formula = 2 * n - 1 
- Now at one point we have to decreses the numbers and that point is only one means that point is joint to the upper body and lower body both so first we are 
printing the upper part with that point. 
- Now after that we have to print the rest so for the lower body we are using this formula = 2 * n - i. 
- Now both formula looks similer but in the first part we have used 1 so that we can print the upper body with the symmentric point and then for the lower body
we have used "i" so that we can print the lower body with decreases number.

*/ 
