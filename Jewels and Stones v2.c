class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> setJ(J.begin(),J.end());
        int sum=0;
        for (char s:S)
        {
            if(setJ.count(s))
                sum++;
        }
       
        return sum;
    }
};