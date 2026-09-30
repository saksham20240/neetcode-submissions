
def bs_index(nums,start,end,target):
        while start<=end:
            mid=(start+end)//2
            if(nums[mid]==target):
                return mid
            elif nums[mid]<target:
                start=mid+1
            else:
                end=mid-1
        return -1

class Solution:


    def search(self, nums: List[int], target: int) -> int:
        n=len(nums)
        start=0
        end=n-1
        return bs_index(nums,start,end,target)
        