class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a, const vector<int> &b){ return a[1] < b[1];});
        
        vector<vector<int>> output;
        vector<vector<int>>::iterator iter;
        for(iter=intervals.begin();iter!=intervals.end()-1;iter++)
        {
            int right=min((*iter)[1],(*(iter+1))[1]);
            int left=max((*iter)[0],(*(iter+1))[0]);   
        
            if (left<=right)
            {
                vector<int> temp{min((*iter)[0],(*(iter+1))[0]),max((*iter)[1],(*(iter+1))[1])};
                cout<<temp[0]<<endl;
                cout<<temp[1]<<endl;
            }
            else
            {
                   
            }
        }
        return output;
    }
};
