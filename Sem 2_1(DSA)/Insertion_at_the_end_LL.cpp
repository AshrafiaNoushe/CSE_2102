#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void PrintLL(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node(0);
    Node *tail = head;
    int a[]={2,3,4};
    for(int i=0;i<3;i++)
    {
        if(head==NULL)
        {
            head = new Node(a[i]);
            tail = head;
        }
        else
        {
            tail->next = new Node(a[i]);
            tail= tail->next;
        }
    }
    PrintLL(head);
}