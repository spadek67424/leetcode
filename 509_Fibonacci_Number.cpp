class Solution {
public:
    int fib(int N) {
      
        if(N==0)
            return 0;
        if(N==1)
            return 1;
        int x=0,y=1;
        int z=0;
        for(int i=2;i<=N;i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        return z;
    }
};