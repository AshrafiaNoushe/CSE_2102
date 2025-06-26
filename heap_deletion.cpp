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
    void deletion(){
        heap[1]=heap[size];
        size--;
        int index = 1;
        while(index<=size){
        int left = 2*index;
        int right = 2*index+1;
        int largest = index;
        if(left<=size && heap[left]>heap[largest]){ //min check left<largest
            largest =left;
        }else if(right<=size && heap[right]>heap[largest]){ // min heap check right<largest
            largest =right;
        }
        if(largest!=index){
            swap(heap[index],heap[largest]);
            index = largest;
        }else{
            break;
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
h.deletion();
h.print_heap();
return 0;
}