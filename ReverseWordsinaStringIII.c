class Solution {
public:
    string::iterator a;
    vector<char> temp;
    string temp2,temp3,temp4;
    string reverseWords(string s) {
    int flag=0;
        for(a=s.end()-1;a!=s.begin()-1;--a)
        {
            temp2=*a;
            if(temp2!=" ")
            {
                temp3+=temp2;
                 cout<<temp2<<endl;
            }
            else
            {
                cout<<temp2<<endl;
                if(flag!=0)
                {
                    temp4=temp3+" "+temp4;
                }
                else
                {
                    temp4=temp3+temp4;
                    flag=1;
                }
                temp3="";
            }
            
        }
        if(flag!=0)
            temp4=temp3+" "+temp4;
        else
            temp4=temp3+temp4;
        return temp4;
    }
    
};