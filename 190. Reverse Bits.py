class Solution:
    def reverseBits(self, n: int) -> int:
        st=""
        for i in range(0,32):
            if(n%2==0):
                st+="0"
                n=n/2
            else:
                st+="1"
                n=(n-1)/2
        print(st)
        return int(st,2)
