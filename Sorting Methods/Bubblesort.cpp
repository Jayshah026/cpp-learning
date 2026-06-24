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

    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


OUTPUT : 

How many element you want to insert : 5
54 4 5 45 6 
4 5 6 45 54 


/*How this works? 
- Here first we take one number and that size will become array size and we will take the input for that array.
- Now let's suppose n = 5. 
- Here in the first loop we are telling that this loop will run from n - 1 means 4th index to 0th index. which are 5 elements. 
- In second loop j is running form the 0 to i - 1, WHY? So when i = 4 this loop will run for 0 to 3 because 4th index element will be sorted. 
- Like wise the number will be decresing because the big element is sorting and i will be decresing form 3,2,1,0 like wise. 
- After this we are storing this element into the temporary element to store the value in correct order. 
- And in the end we are showing the result by running a for loop. 

- So here the main concept is that we are doing swapping and the big element is sorting accordingly form the behind. 
*/
