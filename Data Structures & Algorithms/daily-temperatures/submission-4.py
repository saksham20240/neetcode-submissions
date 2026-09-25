class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        st=[]
        n=len(temperatures)
        ans=[0]*n
        i=n-1
        while(i>=0):
            while(len(st)>0 and  temperatures[i]>=temperatures[st[-1]]):
                st.pop()
            if(len(st)>0):
                ans[i]=st[-1]-i
            st.append(i)
            i-=1
        return ans
        
                

        