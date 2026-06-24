#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter how many elements you want to put : " << endl;
    cin >> a;

    int count = 0;

    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int n;
    cout << "Enter a number to know how many times it come in the array : ";
    cin >> n;

    for(int i = 0; i < a; i++){
        if(arr[i] == n){
            count = count + 1; 
        }
    }
    cout << count;
    
    return 0;
}