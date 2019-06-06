class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>::iterator it;
        int start=0;
        for(it=nums.begin();it!=nums.end();it++){
            start=start^(*it);
        }
        return start;
    }
};
