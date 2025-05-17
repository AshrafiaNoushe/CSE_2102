#include<bits/stdc++.h>
using namespace std;
struct LinkNode{
    int data;
    LinkNode *next;
    LinkNode(int x){
        data = x;
        next = nullptr;
    }
    
};
struct stackLink{
    LinkNode *top;
    int size;
    stackLink(){
        top = nullptr;
        size = 0;
    }
    void stackPush(int x){
        LinkNode *newEle = new LinkNode(x);
        newEle->next = top;
        top = newEle;
        cout<<"Element Pushed yeee"<<endl;
        size++;
    }
    int popStack(){
        if(top==nullptr){
            cout<<"Empty"<<endl;
            return -1;
        }else{
        int topData = top->data;
        LinkNode * temp = top;
        top = top->next;
        delete temp;
        size--;
        return topData;
        }
    }
    int sizeStack(){
        return size;
    }
    bool isEmpty(){
        return top==nullptr;
    }
    int stackPeak(){
        if(top==nullptr){
            return -1;
        }
        while(top!=nullptr){
        return top->data;
        top = top->next;
        }
    }
    void printStack(){
        LinkNode *temp = top;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main()
{
stackLink s;
s.stackPush(10);
s.stackPush(12);
s.stackPush(13);
cout<<"Element poped: "<<s.popStack()<<endl;
cout<<"Stack size: "<<s.sizeStack()<<endl;
cout<<"Is the stack empty? :"<<s.isEmpty()<<endl;
cout<<"Stack Peak: "<<s.stackPeak()<<endl;
return 0;
}