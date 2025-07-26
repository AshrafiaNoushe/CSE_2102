#include<bits/stdc++.h>
using namespace std;
int linear_src(int arr[],int n,int target){
    for(int i =0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int index=linear_src(arr,n,target);
    cout<<"Founded at: "<<index<<endl;
    return 0;
}