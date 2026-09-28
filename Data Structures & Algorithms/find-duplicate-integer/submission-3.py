class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        seen=set()
        for it in nums:
            if it in seen:
                return it
            else:
                seen.add(it)
        return -1
        