#include<bits/stdc++.h>
using namespace std;
#define size  5
class Mqueue{
    private:
    int arr[size];
    int front,rear;
    public:
    Mqueue(){
        front =-1;
        rear =-1;
    }
    void enqueue(int val){
        if(rear>=size-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front ==-1) front++;
        rear++;
        arr[rear]=val;
        cout<<"Enqueued: "<<arr[rear]<<endl;
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Cant dequeue:"<<endl;
            return;
        }else{
            cout<<"Dequeued: "<<arr[front]<<endl;
            front++;
        }
    }

};
int main()
{
Mqueue q;
q.enqueue(10);
q.enqueue(12);
q.enqueue(13);
q.enqueue(19);
q.enqueue(1);
q.dequeue();
return 0;
}