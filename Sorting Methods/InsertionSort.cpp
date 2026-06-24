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

    for(int i = 0; i <= n - 1; i++){
        int j = i;
        
        while(j > 0 && arr[j - 1] > arr[j]){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


OUTPUT : 

How many element you want to insert : 5
88 77 66 55 44
44 55 66 77 88 


/* Explanation 
- Here we take one number n and create that size of an array and also take input in it.
- Let's suppose n = 5.
- Now here the first loop which is outer loop is running from 0 to 4th index.
- After that we store i into the j so "int j = i".
- Now we taken 2nd loop in which we take while loop now in this we insert 2 condition. 
- The first condition is that j should be greater then 0 menas j > 0.
- The second condition is that if arr[j - 1] > arr[j] then swap. 
- Here if we take j >= 0 in the first condition then when we check arr[j - 1] then it will become arr[-1] which is invalid case that's why we took j > 0 instead of
  j >= 0. 
- After swapping we show the final result by for loop.

- Here main thing to understand is that we are seting the element at the correct position from the starting. 

*/
