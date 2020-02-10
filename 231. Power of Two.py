class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n<=0:
            return False
        output=n&n-1
        if output:
            return False
        else:
            return True
