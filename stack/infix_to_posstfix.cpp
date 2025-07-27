#include <bits/stdc++.h>
using namespace std;
bool isoperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int precedence(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string postfix_con(string str, stack<int> st)
{
    string postfix;
    for (auto ch : str)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (st.top() != '(' && (!st.empty()))
            {
                int temp = st.top();
                postfix += temp;
                st.pop();
            }
        }
        else if (isoperator(ch))
        {
            if (st.empty())
            {
                st.push(ch);
            }
            else
            {
                if (precedence(ch) > precedence(st.top()))
                {
                    st.push(ch);
                }
                else if ((precedence(ch) == precedence(st.top())) && ch == '^')
                {
                    st.push(ch);
                }
                else
                {
                    while (precedence(ch) <= precedence(st.top()) && (!st.empty()))
                    {
                        postfix += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
            }
        }
    }
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}
int main()
{
    string infix_exp;
    cin >> infix_exp;
    stack<int> s;
    cout << "Infix exp: " << infix_exp << endl;
    cout << "Postfix exp: " << postfix_con(infix_exp, s);
    return 0;
}