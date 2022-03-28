//logic building

// In type of question you first want to see the array is sorted or not you will find maximum time sorted array.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,6,7,8,9};
    int size_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    int size_arr2 = sizeof(arr2)/sizeof(arr2[0]); 
    
    int i=0, j=0;
    // it will print the arr1 result and find the union
    while(i<size_arr1 && j<size_arr2){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }else if(arr1[i] > arr2[j]){
            cout<<arr2[j++]<<" ";
        }else{
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    
    // It will print the remaining element
    while(i<size_arr1){
        cout<<arr1[i++]<<" ";
    }
    while(j<size_arr2){
        cout<<arr2[j++]<<" ";
    }

    return 0;
}
