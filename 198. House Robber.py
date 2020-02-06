class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=list()
        if len(nums)==1:
            return nums[0]
        if len(nums)==0:
            return 0
        dp.append(nums[0])
        dp.append(max(nums[0],nums[1]))
        output=0
        for i in range(2,len(nums)):
            dp.append(max(dp[i-1],nums[i]+dp[i-2]))
        print(dp)
        return dp[-1]
