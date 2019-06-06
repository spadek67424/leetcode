class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> ma;
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();it++)
        {
            map<int,int>::iterator it2;
            it2=ma.find(*it);
            if(it2==ma.end()){
                
                ma[*it]=1;
            }
            else{
                ma.erase(it2);
            }
        }
        return (ma.begin())->first;
    }
};
