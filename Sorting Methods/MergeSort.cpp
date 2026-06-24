#include<iostream>
#include<vector>
using namespace std;

void Mergesort(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &arr, int low, int high){

    if(low >= high) return;

    int mid = (low + high) / 2;

    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);

    Mergesort(arr, low, mid, high);
}

int main(){

    vector<int> arr = {4, 1, 6, 2, 8, 3};

    int n = arr.size();

    mergesort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}


OUTPUT : 

1 2 3 4 6 8 


/*Explanation : 
- So here as the name suggesting merge here we are first deviding the whole array into the parts as much as we can and then merge them togather. 
- Now inorder to perform this we are taking low, mid, mid+1, high. Now what are they? So basically low to mid is a one part of an array and mid + 1 to high is 
  the second part of the arrar. 
- For them to work perfactly we are taking mid which has formula : mid = low + high / 2. Here low will always be "low = 0" and high will be n - 1th index. 
- Now after doing this stuff we are comparing elements form both array to be sorted and palcing them into the right order. 
- So this is how a merge sort works. 
*/
