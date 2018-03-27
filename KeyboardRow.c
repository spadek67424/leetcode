class Solution {
public:
    string a1="asdfghjklASDFGHJKL";
    string a2="qwertyuiopQWERTYUIOP";
    string a3="zxcvbnmZXCVBNM";
    string temp,temp2;
    vector<string> re;
    int flag1=0,flag2=0,flag3=0;
    vector<string> findWords(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            temp=words[i];
            flag1=flag2=flag3=0;
            cout<<flag1<<flag2<<flag3<<endl;
            for (int x=0;x<=temp.length();x++)
            {
                temp2=temp[x];
                cout<<temp2<<endl;
                cout<<a1.find(temp2)<<endl;
                if(a1.find(temp2)!=a1.npos)   //if didn't find return string.npos
                    flag1=1;
                if(a2.find(temp2)!=a2.npos)
                    flag2=1;
                if(a3.find(temp2)!=a3.npos)
                    flag3=1;
            }
            cout<<flag1<<flag2<<flag3<<endl;
            flag1=flag1+flag2+flag3;
            
            if(flag1==1)
            {
                re.push_back(temp);
            }
        }
        return re;
    }
};