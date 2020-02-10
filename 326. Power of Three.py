class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        maxthree =1162261467
        if n>0 and maxthree % n ==0:
            return True
        return False
