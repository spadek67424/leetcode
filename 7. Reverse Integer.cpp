class Solution {
public:
    int reverse(int x) {
        std::vector<int> output;
        int out=0;
        int digit=0;
        while(x!=0)
        {
            digit=x%10;
            if (out>INT_MAX/10)
            {
                return 0;
            }
            else if(out<INT_MIN/10)
            {
                return 0;
            }
            out=out*10+digit;
            x=x/10;
        }
        
         return out;  
    }
    
        
    
};
