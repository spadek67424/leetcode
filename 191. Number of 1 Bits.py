class Solution:
    def hammingWeight(self, n: int) -> int:
        bit=0;
        while n!=0:
            n=n&n-1
            bit+=1
        return bit
## https://leetcode.com/problems/number-of-1-bits/solution/
