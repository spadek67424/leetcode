class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> hash;
        vector<int>::iterator it;
        int count=0;
        for(it=nums.begin();it!=nums.end();it++)
        {
            std::map<int,int>::iterator iter=hash.find(target-*it);
            if (iter!=hash.end())
            {
                std::vector<int> output{iter->second,count};
                return output;
            }
            hash[*it]=count++;
            
        }
        return nums;
    }
};
