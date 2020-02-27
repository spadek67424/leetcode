class Solution:
    def canPermutePalindrome(self, s: str) -> bool:
        table=dict()
        for i in s:
            if i not in table:
                table[i]=1
            else:
                table[i]+=1
        sum=0
        print(table)
        for x in table:
            sum=sum+table[x]%2
            
        if sum==1 or sum==0:
            return True
        return False
