class Solution {
public:
    int myAtoi(string str) {
        int flagpos=0;
        int flagneg=0;
        int add=0;
        int max=INT_MAX;
        int min=INT_MIN;
        
        string out;
        int count=0;
        if (str.length()==0)
        {
            return 0;
        }
        for(count=0;count!=str.length();count++)
        {
            cout<<"aawwwww"<<str[count]<<endl;
            if(str[count]==' ')
            {
                if(flagpos==1||flagneg==1)
                {
                    return 0;
                }
                continue;
            }
            else if(str[count]=='+')
            {
                cout<<"TTT"<<endl;
                flagpos+=1;
            }
            else if(str[count]=='-')
            { 
                flagneg+=1;
            }
            else
            {
                
                break;
            }
            cout<<"TTT"<<endl;
        }
        cout<<"ww"<<flagneg;
        if((flagneg+flagpos)>=2)
        {
            return 0;
        }
        else if(int(str[count]-'0')<0||int(str[count]-'0')>9)
        {
            return 0;
        }
        
        for (count;count!=str.length();count++)
        {
            if (str[count]!='0')
            {
                break;
            }
        }
        int sum=0;
        while(str[count]!=' '&&count!=str.length())
        {
            cout<<"count="<<count<<endl;
            cout<<str[count]<<endl;
            add=int(str[count])-'0';
            cout<<"sum="<<sum<<endl;
           
            if (add>9||add<0)
            {
                break;
            }
            cout<<"add="<<add<<endl;
            if(sum>max/10)
            {
                if(flagneg==1)
                {
                    return min;
                }
                else
                {
                    return max;
                }
            }
            else if(sum==max/10)
            {
                if(flagneg==1 && add>8)
                {
                    return min;
                }
                if(flagneg==0 && add>7)
                {
                    return max;
                }
            }
            if(int(str[count]-'0')<0||int(str[count]-'0')>9)
            {
                break;   
            }
            sum*=10;
            sum+=add;
            count++;
        }
        cout<<"flagneg=="<<flagneg;
        if(flagneg==1)
        {
            return sum*=-1;
        }
        
        return sum;
    }
};
