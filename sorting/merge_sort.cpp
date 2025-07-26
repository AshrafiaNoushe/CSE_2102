#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int mid,int left,int right){
    int n1 = mid-left+1;
    int n2= right-mid;
    int l[n1],R[n2];
    for(int i=0;i<n1;i++){
        l[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(l[i]<=R[j]){
            arr[k++]=l[i++];
        }else{
            arr[k++]=R[j++];
        }
    }
    while(i<n1){
        arr[k++]=l[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }
}
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid = left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,mid,left,right);

    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={20,30,87,12,43,76,56,9,4,6,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before: ";
    printarr(arr,n);
    //merge(arr,n/2,0,n-1);
    mergesort(arr,0,n-1);
    cout<<"After: ";
    printarr(arr,n);
    return 0;
}