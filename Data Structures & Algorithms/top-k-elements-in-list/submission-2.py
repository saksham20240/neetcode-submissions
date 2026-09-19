class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mpp={}
        for i in range(len(nums)):
            if nums[i] in mpp:
                mpp[nums[i]]+=1
            else:
                mpp[nums[i]]=1
        v=[]
        for key in mpp:
            v.append([mpp[key],key])
        v.sort(reverse=True)
        ans=[]

        for i in range(k):
            ans.append(v[i][1])
        return ans
        