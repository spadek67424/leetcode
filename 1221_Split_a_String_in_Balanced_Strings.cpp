class Solution {
public:
    int balancedStringSplit(string s) {
    int count=0,R=0,L=0;
        for(auto &a:s)
        {
            if(a=='R')
            {
                ++R;
            }
            else
            {
                ++L;
            }
            if(R==L)
            {
                ++count;
            }
        }
        return count;
        
    }
};