class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sort first solution proof that the sorting will gather the intervals which will 
        // be merged together
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a, const vector<int> &b){ return a[0] < b[0];});
        
        vector<vector<int>> output;
        vector<vector<int>>::iterator iter;
        
        for(iter=intervals.begin();iter!=intervals.end();iter++)
        {
            //if output vector is empty or not the same merged intervals append;
            vector<vector<int>>::iterator it=output.end();
            if (output.empty()||(*(it-1))[1]<(*iter)[0])
            {
                output.push_back(*iter);   
            }
            
            // merged the same intervals;
            else
            {
                (*(it-1))[1]=max((*(it-1))[1],(*iter)[1]);    
            }
            
        }
        
        return output;
    }
};
