class Solution {
public:
    bool isValid(string s) {
        vector<char> a;
        int i=0;
        char out;
        for(i=0;i!=s.size();i++){            
            switch(s[i]){
                case ')':
                    if(a.empty()||a.back()!='('){
                        return false;
                    }
                    a.pop_back();
                    break;
                case '}':
                    if(a.empty()||a.back()!='{'){
                        return false;
                    }
                    a.pop_back();
                    break;
                case ']':
                    if(a.empty()||a.back()!='['){
                        return false;
                    }
                    a.pop_back();
                    break;
                default:
                    a.push_back(s[i]);
                    break;
                
                }
        }
        if(a.empty())
            return true;
        else
            return false;
        
    }
};
