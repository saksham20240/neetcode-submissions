class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        int i=0;
        while(i<n)
        {
            if(tokens[i]=="*" || tokens[i]=="+" || tokens[i]=="-" ||
            tokens[i]=="/")
            {
                if(st.size()>=2)
                {
                    int top2=st.top();
                    st.pop();
                    int top1=st.top();
                    st.pop();
                    if(tokens[i]=="*")
                    st.push(top1*top2);
                    else if(tokens[i]=="+")
                    st.push(top1+top2);
                    else if(tokens[i]=="-")
                    st.push(top1-top2);
                    else
                    st.push(top1/top2);
                }
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        if(!st.empty())
        return st.top();
        else
        return -1;
        
    }
};
