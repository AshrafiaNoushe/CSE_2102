#include<bits/stdc++.h>
using namespace std;
class array_stack{
    private:
    int max_size=100;
    int top;
    int arr[100];
    public:
    array_stack(){
        top = -1;
    }
    void push(int x){
        if(top>=max_size-1){
            cout<<"Overflow!!"<<endl;
        }else{
            arr[++top]=x;
        }
    }
    int pop(){
        if(top<0){
            cout<<"Nothing to pop!"<<endl;
            return -1;
        }else{
            return arr[top--];
        }
    }
    int peak()
    {
        if(top<0){
            cout<<"Empty Stack!!"<<endl;
            return -1;
        }else{
            return arr[top];
        }
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void print_stack(){
        if(top<0){
            cout<<"empty"<<endl;
        }else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
array_stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.print_stack();
cout<<"Top: "<<s.peak()<<endl;
s.pop();
cout<<"After poping: "<<endl;
s.print_stack();
}