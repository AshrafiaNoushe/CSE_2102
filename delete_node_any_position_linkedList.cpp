#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
void delete_node(Node *head,int pos){
    Node *temp = head;
    if(head == nullptr){
        cout<<"Sorry this LInkedList is empty"<<endl;
    }else if(pos==0){
        head = temp->next;
        delete temp;
        return;
    }
    int cur_pos =0;
    while(temp!=nullptr && cur_pos<pos-1){
        temp = temp->next;
        cur_pos++;
    }
    if(temp==nullptr || temp->next==nullptr){
        cout<<"Out of range"<<endl;
        delete temp;
        return;
    }
    Node *to_dlt = temp->next;
    temp->next = temp->next->next;
    delete to_dlt;

}
void print_list(Node *head){
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp= temp->next;

    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node *head = new Node(3);
    head->next = new Node(5);
    head->next->next = new Node(7);
    head->next->next->next = new Node(9);
    cout<<"Before deleting:"<<endl;
    print_list(head);
    cout<<"After deleting:"<<endl;
    delete_node(head,2);
    print_list(head);
    return 0;  
}