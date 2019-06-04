class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator vec=nums.begin();
        int count=0;
        if (nums.size()==0||nums.size()==1)
        {
            return nums.size();
        }
        
        for (int i=1;i<nums.size();i++)
        {
            if(nums.at(i)!=nums.at(i-1))
            {
                count+=1;
                nums[count]=nums[i];
                
            }
        }
        return count+1;
    }
};
