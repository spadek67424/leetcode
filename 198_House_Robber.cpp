class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        vector<int> totalvalue;
        totalvalue.push_back(nums[0]);
        totalvalue.push_back(max(nums[0],nums[1]));
        for(int i=2;i<nums.size();i++)
        {
            totalvalue.push_back(max(nums[i]+totalvalue[i-2],totalvalue[i-1]));
        }
        return totalvalue.back();
        
    }
};