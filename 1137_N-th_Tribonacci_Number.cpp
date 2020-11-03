class Solution {
public:
    int tribonacci(int n) {
        int out=0;
        vector<int> nums;
        nums.push_back(0);
        nums.push_back(1);
        nums.push_back(1);
        
        for(int i=3;i<=n;i++)
        {
            nums.push_back(nums[i-1]+nums[i-2]+nums[i-3]);
        }
        return nums[n];
    }
};
