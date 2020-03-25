class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num<2:
            return True
        left=2
        right=num
        while left<=right:
            mid=(left+right)//2 
            print(left,right,mid)
            if mid**2==num:
                return True
            if num<(mid**2):
                right=mid-1
            else:
                left=mid+1
        return False
                
