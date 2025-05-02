#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
void printLinkedList(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" "; 
        temp = temp->next;
    }
    cout<<endl;

}
int main()
{
    Node *head;
    head = NULL;
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head = new Node(a[i]);
        }else{
            Node *temp=head;
            temp = new Node(a[i]);
            temp->next = head;
            head = temp;
        }

    }
    //Node *head;
    printLinkedList(head);
    return 0;
}
