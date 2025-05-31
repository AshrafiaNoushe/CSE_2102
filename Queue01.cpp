#include<bits/stdc++.h>
using namespace std;
#define n 20
class myQue{
private:
int front;
int back;
int *arr;
public:
myQue(){
    arr = new int[n];
    front =-1;
    back = -1;
}
void enqueue(int x){
    if(back==n-1){
        cout<<"Overflowed"<<endl;
        return;
    }else arr[++back]=x;
    if(front==-1){
        front++;
    }
}
void dequeue(){
    if(front==-1 || front>back){
        cout<<"Overflowed"<<endl;
        return;
    }else front++;
}
int peek(){
    if(front==-1 || front>back){
        cout<<"Overflowed"<<endl;
        return -1;
    }else return arr[front];
}
bool isEmpty(){
    if(front==-1) return true;
    else return false;
}
};
int main()
{
myQue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
cout<<"1st: "<<q.peek()<<endl;
q.dequeue();
cout<<"2nd: "<<q.peek()<<endl;
q.dequeue();
cout<<"3rd: "<<q.peek()<<endl;
q.dequeue();
cout<<"4th: "<<q.peek()<<endl;
q.dequeue();
cout<<"5th: "<<q.peek()<<endl;
return 0;
}