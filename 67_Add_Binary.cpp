class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int sum=0;
        string output;
        int i=a.length()-1,j=b.length()-1;
        
        
        while(i>=0 || j>=0 || carry!=0)
        {
            if(i>=0)
            {
                if(a[i]=='1')
                    carry+=1;
                --i;
            }
            if(j>=0)
            {
                if(b[j]=='1')
                    carry+=1;
                --j;
            }
            output=to_string(carry%2)+output;
            carry=carry/2;
            
            
        }
        
        return output;
        
    }
};