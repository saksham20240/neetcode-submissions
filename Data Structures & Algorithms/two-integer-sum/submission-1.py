class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans=[]
        mpp={}
        for i in range(len(nums)):
            book=target-nums[i]
            if book in mpp:
                ans.append(mpp[book])
                ans.append(i)
            else:
                mpp[nums[i]]=i

        return ans

        