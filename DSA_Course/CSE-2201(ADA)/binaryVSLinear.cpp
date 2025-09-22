#include<bits/stdc++.h>
using namespace std;
void binary_src(int arr[],int n,int item){
    int b_count =0;
    bool flag = 1;
    int l=0,r=n-1;
    while(l<=r){
        b_count++;
        int mid = l + (r-l)/2;
        if(arr[mid]==item){
            cout<<"Found at: "<<mid<<endl;
            cout<<"Binary loop count: "<<b_count<<endl;
            flag = 0;
            break;
        }
        else if(arr[mid]>item){
            l = mid+1;
        }else if(arr[mid]<item){
            r = mid-1;
        }
    }
    if(flag){
        cout<<"Not Found"<<endl;
    }
}
void linear_src(int arr[],int n,int item){
    int l_count=0;
    bool flag =1;
    for(int i=0;i<n;i++){
        l_count++;
        if(arr[i]==item){
            cout<<"Fount at: "<<i<<endl;
            cout<<"Linear loop count: "<<l_count<<endl;
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<"Not Found"<<endl;
    }
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
int item;
cin>>item;
linear_src(arr,n,item);
binary_src(arr,n,item);
return 0;
}