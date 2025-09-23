#include <bits/stdc++.h>
using namespace std;
int prefix_ev(string s){
    stack<int>st;
    for(int i = s.size()-1;i>=0;i--){
        for(auto ch: s){
            if(isdigit(ch)){
                st.push(ch-'0');
            }else{
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop();
                int result;
                if (ch == '+')
                result = val1 + val2;
            else if (ch == '-')
                result = val1 - val2;
            else if (ch == '*')
                result = val1 * val2;
            else if (ch == '/')
                result = val1 / val2;
            st.push(result);
            }
        }

    }
    return st.top();
    
}
int postfix_ev(string s)
{
    stack<int> st;
    for (auto ch : s)
    {
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            int result;
            if (ch == '+')
                result = val1 + val2;
            else if (ch == '-')
                result = val1 - val2;
            else if (ch == '*')
                result = val1 * val2;
            else if (ch == '/')
                result = val1 / val2;
            st.push(result);
        }
    }
    return st.top();
}
int main()
{
    string s;
    cin >> s;
    cout << "Postfix: " << postfix_ev(s) << endl;
    cout<<"Prefix: "<<prefix_ev(s)<<endl;
    return 0;
}