class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string output;
        while(i!=-1 || j!=-1 || carry!=0)
        {
            
            if (i!=-1)
            {
                carry+=int(num1[i]-'0');
                --i;
                
            }
            if (j!=-1)
            {
                carry+=int(num2[j]-'0');
                --j;
            }
            output=to_string(carry%10)+output;
            
            if(carry>=10)
            {
                carry=1;
            }
            else
            {
                carry=0;
            }
        }
        return output;
    }
};