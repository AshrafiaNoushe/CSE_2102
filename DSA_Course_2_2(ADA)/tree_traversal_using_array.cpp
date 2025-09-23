#include<bits/stdc++.h>
using namespace std;
void inorder(int i,int n,int tree[]){
    if(i<n && tree[i]!=-1){
        inorder(2*i+1,n,tree);
        cout<<tree[i]<<" ";
        inorder(2*i+2,n,tree);

    }
}
void preorder(int i,int n,int tree[]){
    if(i<n && tree[i]!=-1){
        cout<<tree[i]<<" ";
        preorder(2*i+1,n,tree);
        preorder(2*i+2,n,tree);
    }
}
void postorder(int i,int n,int tree[]){
    if(i<n && tree[i]!=-1){
        postorder(2*i+1,n,tree);
        postorder(2*i+2,n,tree);
        cout<<tree[i]<<" ";
    }
}
int main()
{
    int tree[]={43,31,64,20,-1,40,56,89,28,-1,-1,33,-1,-1,47};
    cout<<"Inorder: "<<endl;
    inorder(0,15,tree);
    cout<<endl;
    cout<<"Postorder Trav:"<<endl;
    postorder(0,15,tree);
    cout<<endl;
    cout<<"Preorder Trav: "<<endl;
    preorder(0,15,tree);
    return 0;
}