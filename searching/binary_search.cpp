#include<bits/stdc++.h>
using namespace std;
void binary(int arr[],int l,int r,int item){
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==item){
            cout<<"Founded at: "<<mid<<endl;
            return;
        }
        else if(item>arr[mid]){
            l = mid+1;
        }else{
            r = mid -1;
        }
    }
}
int main()
{
    int arr[]={12,17,31,56,75,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item;
    cin>>item;
    binary(arr,0,n-1,item);
    return 0;
}