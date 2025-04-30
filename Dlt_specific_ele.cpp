#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int value;
    cin>>value;
    int size =0;
    for(int i=0;i<n;i++){

        if(a[i]!=value){
            a[size]=a[i];
            size++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}