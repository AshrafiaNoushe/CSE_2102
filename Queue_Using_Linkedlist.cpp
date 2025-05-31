#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next = nullptr;
    }
};
class myQue{
    public:
    node *front;
    node *back;
    myQue()
    {
        front = nullptr;
        back = nullptr;
    }
    void push(int x){
        node *n = new node(x);
        if(front==nullptr){
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop(){
        if(front==nullptr){
            cout<<"queue overflowed"<<endl;
            return;
        }else{
            node *newnode = front;
            front = front->next;
            delete newnode;
        }
    }
    int peek(){
        if(front==nullptr){
            cout<<"queue overflowed"<<endl;
            return -1;
        }else return front->data;      
    }
    bool isEmpty()
    {
        if(front==nullptr){
            return true;
        }else return false;
    }
};
int main()
{
myQue q;
q.push(1); 
q.push(2); 
q.push(3); 
q.push(4); 
q.push(5); 
cout<<"front: "<<q.peek()<<endl;
q.pop();
cout<<"front: "<<q.peek()<<endl;
q.pop();
cout<<"front: "<<q.peek()<<endl;
q.pop();
cout<<"front: "<<q.peek()<<endl;
q.pop();
cout<<"front: "<<q.peek()<<endl;
q.pop();
cout<<"front: "<<q.peek()<<endl;
q.pop();
return 0;
}