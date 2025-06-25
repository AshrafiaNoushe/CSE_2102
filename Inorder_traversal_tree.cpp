#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *l_child;
    Node *r_child;
    Node(int val){
        data = val;
        l_child = nullptr;
        r_child = nullptr;
    }
};
void inorder_trav(Node *root){
    if(root==nullptr) return;
    inorder_trav(root->l_child);
    cout<<root->data<<" ";
    inorder_trav(root->r_child);
}
int main()
{
Node *root = new Node(1);
root->l_child = new Node(2);
root->r_child = new Node(3);
root->l_child->l_child = new Node(4);
root->l_child->r_child = new Node(5);
cout<<"Traversal: "<<endl;
inorder_trav(root);
return 0;
}