#include<bits/stdc++.h>
using namespace std;
class Heap{
    int heap[100];
    int size;
    public:
    Heap(){
        size = 0;
    }
    void insert(int val){
        size++;
        heap[size]=val;
        int index = size;
        while(index>1){
            int parent = index/2;
            if(heap[parent]<heap[index]){//for min heap[parent]>heap[index]
                swap(heap[parent],heap[index]);
                index = parent;
            }else{
                return;
            }
        }

    }
    void print_heap(){
        cout<<"Heap: ";
        for(int i=1;i<=size;i++){
            cout<<heap[i]<<" ";
        }
    }
};
int main()
{
Heap h;
h.insert(1);
h.insert(2);
h.insert(3);
h.insert(4);
h.insert(5);
h.insert(6);
h.insert(7);
h.insert(8);
h.print_heap();
return 0;
}