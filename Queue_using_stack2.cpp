#include<bits/stdc++.h>
using namespace std;
class myQue{
    private:
    stack<int>s1;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop()
    {
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;

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
cout<<"poped1: "<<q.pop()<<endl;
q.push(6);
cout<<"poped2: "<<q.pop()<<endl;
cout<<"poped3: "<<q.pop()<<endl;
cout<<"poped4: "<<q.pop()<<endl;
cout<<"poped5: "<<q.pop()<<endl;
cout<<"poped6: "<<q.pop()<<endl;
cout<<"poped7: "<<q.pop()<<endl;
return 0;
}