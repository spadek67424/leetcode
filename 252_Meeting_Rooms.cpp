class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if(intervals.empty())
        {
            return true;
        }
        sort(intervals.begin(), intervals.end(),[](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];});
        for(vector<vector<int>>::iterator iter=intervals.begin();iter!=intervals.end()-1;iter++)
        {
            if((*iter)[1]>(*(iter+1))[0])
            {
                return false;
            }
        }
            
        return true;
    }
};