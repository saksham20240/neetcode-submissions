class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        n=len(tokens)
        st=[]
        i=0
        while(i<n):
            if (tokens[i]=='*' or tokens[i]=='+' or tokens[i]=='-' or tokens[i]=='/'):
                if(len(st)>=2):
                    top2=st.pop()
                    top1=st.pop()
                    if(tokens[i]=='*'):
                        st.append(top1*top2)
                    elif(tokens[i]=='+'):
                        st.append(top1+top2)
                    elif(tokens[i]=='-'):
                        st.append(top1-top2)
                    else:
                        st.append(int(top1/top2))
            else:
                st.append(int(tokens[i]))
            i+=1
        
        if(len(st)==0):
            return -1
        else:
            return st.pop()


        