class Solution:
    def climbStairs(self, n: int) -> int:
        out=list()
        out.append(1)
        out.append(1)
        out.append(2)
        for i in range(3,n+1):
            print(i)
            out.append(out[i-1]+out[i-2])
        return out[n]
