#include<bits/stdc++.h>
using namespace std;
void insert_node(int &n,int maxSize,int item,int tree[]){
    if(n>=maxSize){
        cout<<"Tree is full"<<endl;
        return;
    }
    tree[n]=item;
    n++;
}
void print_tree(int tree[],int n){
    for(int i=0;i<n;i++){
        cout<<tree[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int maxsize = 100;
    int tree[maxsize]={10,20,30,40,50};
    int n = 5;
    int item;
    cin>>item;
    insert_node(n,maxsize,item,tree);
    print_tree(tree,n);
    return 0;
}