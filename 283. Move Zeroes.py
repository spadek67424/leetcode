class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count=0
        for x in nums:
            if nums[count] ==0:
                del nums[count]
                nums.append(0)
            else:
                count+=1
