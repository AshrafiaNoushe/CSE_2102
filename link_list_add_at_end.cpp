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

void add_at_end(Node *head,int val){
    Node *newnode = new Node(val);
    Node *temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
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
    add_at_end(head,20);
    add_at_end(head,21);
    cout<<"After adding: "<<endl;
    print_list(head);
    return 0;
}