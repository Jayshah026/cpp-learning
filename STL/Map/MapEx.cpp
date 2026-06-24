#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }


    // Here q = Number of question user will ask. 
    int q;
    cout << "Enter for q : ";
    cin >> q;

    while(q--){
        int number; 
        cin >> number; 
        cout << mp[number] << endl;
    }
    return 0;
}


OUTPUT : 

Enter a number : 5
1 1 2 3 4 
Enter for q : 10
1 1 1 3 6 5 4 7 8 4 
2
2
2
1
0
0
1
0
0
1
