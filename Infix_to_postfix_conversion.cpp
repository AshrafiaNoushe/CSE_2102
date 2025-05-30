#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
    if(c=='+' || c=='-'|| c=='*'|| c=='/'||c=='^'){
        return true;
    }else{
        return false;
    }
}
int precedence(char c){
    if(c=='+'||c=='-'){
        return 1;
    }else if(c=='*'||c=='/'){
        return 2;
    }else if(c=='^'){
        return 3;
    }else{
        return -1;
    }
}
string PostfixCon(stack<char>s,string infix){
    string postfix;
for(int i=0;i<infix.size();i++){
    if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&& infix[i]<='Z')){
        postfix+=infix[i];
    }
    else if(infix[i]=='('){
        s.push(infix[i]);
    }else if(infix[i]==')'){
        while((s.top()!='(')&&(!s.empty())){
            char temp = s.top();
            postfix+=temp;
            s.pop();
        }
        if(s.top()=='('){
            s.pop();
        }
    }else if(isOperator(infix[i])){
        if(s.empty()){
            s.push(infix[i]);
        }else{
            if(precedence(infix[i])>precedence(s.top())){
                s.push(infix[i]);
            }else if(precedence(infix[i])==precedence(s.top()) && infix[i]=='^'){
                s.push(infix[i]);
            }else{
                if((!s.empty())&& precedence(infix[i])>=precedence(s.top())){
                    char temp = s.top();
                    postfix+= temp;
                    s.pop();
                }
            }
        }
    }
}
while(!s.empty()){
    postfix+=s.top();
    s.pop();
}
return postfix;
}
int main()
{
    string infix_exp,postfix_exp;
    cin>>infix_exp;
    stack<char>s;
    postfix_exp = PostfixCon(s,infix_exp);
    cout<<"Postfix: "<<postfix_exp<<endl;
    return 0;
}