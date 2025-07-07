#include <bits/stdc++.h>
using namespace std;
void dlt_node(int i, int n, int dlt, int tree[])
{
    while (i < n)
    {
        if (dlt == tree[i])
        {
            // No child
            if ((2 * i + 1 >= n || tree[2*i+1]==-1) && (2 * i + 2 >= n || tree[2*i+2]==-1))
            {
                tree[i] = -1;
                break;
            }
            // One child
            else if ((tree[2 * i + 1] == -1 && tree[2 * i + 2] != -1) || (tree[2 * i + 1] != -1 && tree[2 * i + 2] == -1))
            {
                if (tree[2 * i + 1] == -1 && tree[2 * i + 2] != -1)
                {
                    tree[i] = tree[2 * i + 2];
                    tree[2 * i + 2] = -1;
                }
                else if (tree[2 * i + 1] != -1 && tree[2 * i + 2] == -1)
                {
                    tree[i] = tree[2 * i + 1];
                    tree[2 * i + 1] = -1;
                }
                break;
            }
            // Two child
            else if (tree[2 * i + 1] != -1 && tree[2 * i + 2] != -1)
            {
                int k = 2 * i + 2;
                while (2 * k + 1 < n && tree[2 * k + 1] != -1)
                {
                    k = 2 * k + 1;
                }
                tree[i] = tree[k];
                tree[k] = -1;
                break;
            }
        }
        if (dlt < tree[i])
        {
            i = 2 * i + 1;
        }
        else if (dlt > tree[i])
        {
            i = 2 * i + 2;
        }
    }
}
int main()
{
    int tree[] = {43, 31, 64, 20, 40, 56, 89, -1, 28, 33, -1, 47, 59, -1, -1};
    int n = 15;
    cout<<"Tree: "<<endl;
    for(int i=0;i<15;i++){
        cout<<tree[i]<<" ";
    }
    cout<<endl;
    int dlt;
    cout << "Node u wanna dlt: ";
    cin >> dlt;
    dlt_node(0, n, dlt, tree);
    cout<<"After dlt: "<<endl;
    for(int i=0;i<15;i++){
        cout<<tree[i]<<" ";
    }
    return 0;
}