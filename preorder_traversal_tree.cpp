#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *right;
    Node *left;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void preorder_trav(Node*root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorder_trav(root->left);
    preorder_trav(root->right);
}
int main()
{
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->right->left= new Node(4);
root->right->right= new Node(5);
root->left->left= new Node(6);
root->left->right = new Node(7);
cout<<"Traversal: ";
preorder_trav(root);
return 0;
}