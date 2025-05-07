#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
void print_forward(Node *head){
    Node *temp = head;
    if(head==nullptr) return;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp!=head);
    cout<<"Back to head "<<endl;
}
void print_backward(Node *tail){
    Node *temp = tail;
    if(tail==nullptr) return;
    do{
        cout<<temp->data<<"<-";
        temp = temp->prev;
    }while(temp!=tail);
    cout<<"Back to tail"<<endl;
}
int main()
{
    Node *head = new Node{1,nullptr,nullptr};
    Node *second = new Node{2,nullptr,nullptr};
    Node *third = new Node{3,nullptr,nullptr};
    Node *fourth = new Node{4,nullptr,nullptr};
    Node *fifth = new Node{5,nullptr,nullptr};
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = head;
    head->prev = fifth;

    cout<<"Forward Traverse: "<<endl;
    print_forward(head);
    cout<<"Backward Traversal: "<<endl;
    print_backward(fifth);
    return 0;
}