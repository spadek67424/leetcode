class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        output=dict()
        for i in nums:
            if i not in output.keys():
                output[i]=1
            else:
                output[i]=output[i]+1
        
        max=-1
        num=0
        for x in output.keys():
            if output[x]>=max:
                max=output[x]
                num=x
        return num
