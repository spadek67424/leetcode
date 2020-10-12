class Solution {
public:
    bool isPalindrome(string s) {
        string::iterator it1=s.begin();
        string::reverse_iterator it2=s.rbegin();
        while(it1!=s.end() &&　it2!=s.rend())
        {
            if(!isalnum(*it1))
            {
                ++it1;
                continue;
            }
            if(!isalnum(*it2))
            {
                ++it2;
                continue;
            }
            cout<<tolower(*it1)<<endl;
            cout<<tolower(*it2)<<endl;
            
            if(tolower(*it1)==tolower(*it2))
            {
                ++it1;
                ++it2;
                continue;
            }
            else
            {
                return false;       
            }
            
        }
        
        return true;
    
    
        
    }
};