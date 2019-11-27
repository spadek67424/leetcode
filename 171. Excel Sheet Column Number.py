class Solution:
    def titleToNumber(self, s: str) -> int:
        count=0
        sum=0
        for x in s[-1::-1]:
            temp=ord(x)-64
            sum+=temp*(26**count)
            count+=1
        return sum
