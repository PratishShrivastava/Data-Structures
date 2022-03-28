//logic building

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 0, 3, 0, 5, 6, 0, 8, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int count = 0;
    // all the non zero will shift to front
    for(int i=0;i<n;++i){
        if(arr[i]!=0){
            arr[count++] = arr[i];
        }
    }
    
    // making the remaining zero
    while(count<n){
        arr[count++]=0;
    }
    
    // print the value
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
