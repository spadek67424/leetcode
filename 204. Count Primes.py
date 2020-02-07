class Solution:
    def countPrimes(self, n: int) -> int:
        isprime=list()
        for i in range(n):
            isprime.append(1)
        i=2
        
        while (i*i<n):
            j=i
            while(j*i<n):
                isprime[i*j]=0
                j+=1
            i+=1
        j=0        
        for i in range(2,len(isprime)):
            if isprime[i]==1:
                j+=1
        if  n>2:
            return j
        else:
            return 0
