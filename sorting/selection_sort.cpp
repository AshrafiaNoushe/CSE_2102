#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minInd = i;
        for(int j=i+1;j<size;j++){
            if(arr[minInd]>arr[j]){
                //minInd= j;
                swap(arr[minInd],arr[j]);
            }
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={12,9,76,34,21,38,2,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    print(arr,n);
    return 0;
}