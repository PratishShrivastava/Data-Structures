//basic logic building
#include <bits/stdc++.h>
using namespace std;

int main(){
    // making array
    int arr[] = {5,95,15,2,5,54,654,16,84,3,46,247,5,46,4,861,684,64,465,1};
    // size of array
    int n = sizeof(arr)/sizeof(arr[0]);
    // storing any value of array.
    int max=arr[0];
    
    for(int i=1;i<n;++i){
        //compairing array and storing large number
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest element is "<<max<<endl;
    
    int min=arr[0];
    
    for(int i=1;i<n;++i){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Smallest element is "<<min<<endl;

    return 0;
}
