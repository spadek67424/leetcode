class Solution:
    def isHappy(self, n: int) -> bool:
        table=set()
        if n==1:
            return True
        while n!=0:
            n=self.cal(n)
            if n==1:
                return True
            elif n not in table:
                table.add(n)
            else:
                return False
                
    def cal(self, n):
        sum=0
        while(n!=0):
            sum+=(n%10)*(n%10)
            n=n//10
        return sum
