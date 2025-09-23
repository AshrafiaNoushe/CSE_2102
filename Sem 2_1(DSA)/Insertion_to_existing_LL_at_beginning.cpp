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
void printLinkedList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "; 
        temp = temp->next;
    }
    cout<<endl;

}
int main()
{
    Node *head;
    //Existing LinkedLIst
    head = new Node(1);
    head->next= new Node(2);
    head->next->next=new Node(3);
    int a[]={9,8,7,5};
    for(int i=3;i>=0;i--)//if i put the normal condidtion i will show output in reverse so need to i--
    {
        if(head==NULL)
        {
            head = new Node(a[i]);
        }
        else
        {
            Node *newNode;
            newNode = new Node(a[i]);
            newNode->next = head;
            head = newNode;
        }

    }
    printLinkedList(head);
    return 0;
}
