#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class singly_ll{
    Node *head;  
    public:
    singly_ll()
    {
        head = NULL;
    }
    void insertion_at_b(int val){
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        cout<<"Inserted at beginning: "<<val<<endl;
    }
    void dlt_at_end(){
        if(head==NULL){
            cout<<"Ll is empty"<<endl;
            return;
        }//when it has only one node
        if(head->next==NULL){
            cout<<"Deleted: "<<head->data<<endl;
            delete head;
            head = NULL;
            return;
        }
        // when there is More than one nodes
        Node *temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        cout<<"Deleted: "<<temp->next->data<<endl;
        delete temp->next;
        temp->next = NULL;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
singly_ll list;
list.insertion_at_b(10);
list.insertion_at_b(20);
list.insertion_at_b(30);
list.insertion_at_b(40);
list.display();
list.dlt_at_end();
list.display();
return 0;
}