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
void postorder_trav(Node*root){
    if(root==nullptr) return;
    postorder_trav(root->left);
    postorder_trav(root->right);
    cout<<root->data<<" ";
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
postorder_trav(root);
return 0;
}