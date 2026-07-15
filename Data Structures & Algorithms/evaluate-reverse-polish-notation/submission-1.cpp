class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if((tokens[i]=="+")||(tokens[i]=="-")||(tokens[i]=="*")||
            (tokens[i]=="/"))
            {
                if(st.size()>=2)
                {
                    int num2=st.top();
                    st.pop();
                    int num1=st.top();
                    st.pop();
                    if(tokens[i]=="+")
                    {
                        st.push(num1+num2);
                    }
                    else if(tokens[i]=="-")
                    {
                        st.push(num1-num2);
                    }
                    else if(tokens[i]=="*")
                    {
                        st.push(num1*num2);
                    }
                    else
                    {
                        st.push(num1/num2);
                    }
                }
                    
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        if(!st.empty())
        return st.top();
        else
        return 0;
        
    }
};
