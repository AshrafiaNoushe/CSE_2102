#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

void add_node_between(int value,Node *head,int pos){
    Node *newnode = new Node(value);
    if(pos==0){
        newnode->next = head;
        head = newnode;
        return;
    }
    Node *temp = head;
    int cur =0;
    while(temp!=nullptr && cur<pos-1){
        temp = temp->next;
        cur++;
    }
    if(temp==nullptr){
        cout<<"sorry can't add"<<endl;
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_list(Node *head){
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(15);
    cout<<"Before Adding: "<<endl;
    print_list(head);
    add_node_between(11,head,2);
    add_node_between(11,head,3);
    cout<<"After adding: "<<endl;
    print_list(head);
    return 0;
}