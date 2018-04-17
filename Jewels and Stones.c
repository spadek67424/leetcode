class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<int> count(58,0); //A~z is 122-65=57 so total 58
        for(int i=0;i<S.size();i++)
        {
            int a=int(S[i])-65;
            cout<<a<<endl;
            count[a]++;
        }
        int sum=0;
        for(int i=0;i<J.size();i++)
        {
            int a=int(J[i])-65;
            sum=sum+count[a];
        }
       
        return sum;
    }
};