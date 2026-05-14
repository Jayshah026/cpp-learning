#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "How many element you want to insert : ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = 0; j <= n-2; j++){
        int min = j;

        for(int k = j; k <= n - 1; k++){
            if(arr[k] < arr[min]){
                min = k;
            }
        }
        int temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}



OUTPUT : 

How many element you want to insert : 5
3 5 4 1 2 
1 2 3 4 5 


/*What we have done in this? 
- So first we have taken a value n and as per that we have taken an array with the size of that value. Let's suppose it is n so array will become arr[n]. 
- Now after that we take first loop in which we taken values for the array. 
- After that we take another for loop in which we take "j = 0; j <= n - 1; j++" Means j will start from the 0th index, Now after that it will go up to n - 2, here
  let's take n = 5. Now n - 2 = 3 so this loop will run up to 3rd index meand 0,1,2,3 not for the 4th index because it will be sorted automatically. 
- Now after for loop we take "int min = j" Means here for to find the minimum value we take this. for example if we have value of 5,4,7,2,1 so here j will go to 
  with every index and imagine that the value it is on right now is the minimum. 
- Now for finding value we will compare the value for that we again take loop and it will run up to "n - 1" and it will compare arr[k] and arr[min]. 
- After that we will store this value in the temporary container "temp" and like that it will be assigning the values like wise to arrange the values.  
*/
