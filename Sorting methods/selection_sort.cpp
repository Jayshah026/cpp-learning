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