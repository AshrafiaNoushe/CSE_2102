#include<bits/stdc++.h>
using namespace std;
int findIT(int a[],int n,int item){
    int left =0;
    int right = n-1;
    int mid;
    //int mid = floor((left+right)/2);
    while(left<=right){
        mid = (left+right)/2;
        if(a[mid]==item){
            return mid;
        }else if(a[mid]>item){
            right = mid -1;
        }else{
            left = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int item;
    cin>>item;
    int result = findIT(a,n,item);
    if(result != -1){
        cout<<"Item Found at index: "<<result<<endl;
    }else{
        cout<<"Sorry Item not found!!!"<<endl;
    }
    return 0;
}