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
    cout << "The largest element is : " << largest;

    return 0;
}