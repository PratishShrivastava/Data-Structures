// insertion sort

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {78,98,6,52,4,8,1,25,5,63,91,18,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=1;i<n;++i){
        int current = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
