#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void PrintElement(Node*head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node *head = new Node();
    Node *Second = new Node();
    Node *Third = new Node();
    Node *Tail = new Node();
    head->data = 10;
    head->next = Second;
    Second->data = 20;
    Second->next = Third;
    Third->data = 30;
    Third->next = Tail;
    Tail->data = 100;
    Tail->next = NULL;
    cout<<"Linked List elements: "<<endl;
    PrintElement(head);
    return 0;
}