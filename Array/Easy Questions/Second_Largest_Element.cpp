#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a  number : ";
    cin >> n;


    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

    int largest = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    
    int second_largest = -1; 

    for(int i = 0; i < n; i++){
        if(arr[i] > second_largest && arr[i] != largest)
        second_largest = arr[i];
    }

    cout << "The second largest element is : " << second_largest;
    
    return 0;
}