class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> dic;
        for(int i=0;i<order.length();++i)
        {
            dic.insert(std::pair<char,int>(order[i],i));
        }
        dic.insert(std::pair<char,int>('\0',-1));
        vector<string>::iterator sit;
        
        for(sit=words.begin();sit!=words.end()-1;sit++)
        {
            string::iterator it1=sit->begin();
            string::iterator it2=(sit+1)->begin();
            while(it1!=sit->end() || it2!=(sit+1)->end())
            {
                
                if(dic[*it1]>dic[*it2])
                {
                    return false;
                }else if(*it1==*it2)
                {
                    ++it1;
                    ++it2;
                }else if(dic[*it1]<dic[*it2])
                {
                    break;
                }
                if(it1!=sit->end() && it2==(sit+1)->end())
                {
                    return false;
                }
                
                
                
            }
            
        }
        
        return true;
    }
};