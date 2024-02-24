#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// void reversArray(int arr[],int s,int e){

//         while(s < e){
//             int t = arr[s];
//             arr[s] = arr[e];
//             arr[e] = t;
//             s++;
//             e--;
//         }
//     }

int main(){

    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //  Approach - 1
    // reversArray(arr, 0, n-1);

    // printArray(arr, n);
    
    //approach 2

    reverse(arr,arr+n);
    printArray(arr,n);

    return 0;
}