class Solution:
    def isValid(self, s: str) -> bool:
        n=len(s)
        st=[]
        for i in range(n):
            if(s[i]=='[' or s[i]=='{' or s[i]=='('):
                st.append(s[i])
            elif(len(st)==0):
                return False
            else:
                if(s[i]==']' and st[-1]=='[' or s[i]=='}' and st[-1]=='{' or s[i]==')' and st[-1]=='(' ):
                    st.pop()
                else:
                    return False




        if(len(st)==0):
            return True
        else:
            return False

