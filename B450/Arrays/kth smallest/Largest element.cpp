#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int reversArray(int arr[],int s,int e,int k){
        sort(arr,arr+e+1);
        
        k = arr[k-1];
        
        return k;
}

int main(){

    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0,e=n,k=3;

    int o = reversArray(arr,s,e,k);

    cout<<o<<endl;

return 0;
}