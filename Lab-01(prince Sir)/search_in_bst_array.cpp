#include <bits/stdc++.h>
using namespace std;
bool found = false;
void search(int i, int n, int item, int tree[])
{
    if (i >= n || tree[i]==-1 || found) return;
    if(item == tree[i]){
        cout<<"Founded at: "<<i<<endl;
        found = true;
        return;
    }
    search(2*i+1,n,item,tree);
    search(2*i+2,n,item,tree);

}
int main()
{
    int tree[] = {43, 31, 64, 20, -1, 40, 56, 89, 28, -1, -1, 33, -1, -1, 47};//has to be BST
    int item = 33;
    search(0, 15, item, tree);
    if(found==false){
        cout<<"Not Found"<<endl;
    }
    return 0;
}