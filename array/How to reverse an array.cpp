//logic building

// In type of question you first want to see the array is sorted or not you will find maximum time sorted array.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int j=n-1;
    for(int i=0; i<n/2; ++i){
        // swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    
    // print the value
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
