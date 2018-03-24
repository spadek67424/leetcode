class Solution {
public:
    int try2(int x){
        int temp=x;
        vector<int> contain;
        vector<int>::iterator a;
        int result=0;
            
            while (temp!=0)
            {
                contain.push_back(temp%10);
                temp=temp/10;    
            }
            int digit2=1;
            
            while(!contain.empty())
            {
                result+=digit2*contain.back();
            
                contain.pop_back();
                
                cout<<result<<endl;
                digit2*=10;
                
            }

        if (result>2147483647)
        {
            return 0;
        }
        return result;
        
    }
    
    int reverse(int x) {
        vector<int> contain;
        vector<int>::iterator a;
        int result=0;
        if (x>=0)
        {
            result=try2(x);
        }
        else if(x<0)
        {
            result=try2(-x);
            result=result*-1;
        }
        
        return result;
    }
    
};