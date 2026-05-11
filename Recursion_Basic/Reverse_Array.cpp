#include<iostream>
using namespace std;

void f(int i, int n, int arr[]){
    if(i >= n/2){
        return;
    }else{
        swap(arr[i], arr[n - i - 1]);
        f(i + 1, n, arr);
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int arr[n];

    cout << "Enter elements : ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    f(0, n, arr);

    cout << "Reversed array : ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}


OUTPUT : 

Enter a number : 5
Enter elements : 5 4 5 6 7
Reversed array : 7 6 5 4 5 
