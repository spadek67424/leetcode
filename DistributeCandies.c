class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        vector<int> number,evenorodd;
        int max=*max_element(candies.begin(),candies.end());
        int countnow=0,countnum=0;
        for(vector<int>::iterator a=candies.begin();a!=candies.end();++a)
        {
            if(countnow!=*a)
            {
                cout<<"here is "<<*a<<endl;
                cout<<"here is count"<<countnow<<endl;
                number.push_back(countnum);
                if(countnum%2==0)
                {
                    evenorodd.push_back(0);
                }
                else
                {
                    evenorodd.push_back(1);
                }
                countnow=*a;
                countnum=1;
            }
            else
            {
                countnum+=1;
            }
                    
        }
        number.push_back(countnum);
        if(countnum%2==0)
        {
            evenorodd.push_back(0);
        }
        else
        {
            evenorodd.push_back(1);
        }
        
        int countodd=0,counteven=0,countonlyone=0;
        for(vector<int>::iterator a=number.begin()+1;a!=number.end();++a)
        {
            if(*a==1)
            {
                countonlyone+=1;
            }
            
        }
        for(vector<int>::iterator a=evenorodd.begin()+1;a!=evenorodd.end();++a)
        {
            if(*a==1)
            {
                countodd+=1;
            }
            else
            {
                counteven+=1;
            }
        }
        countodd=countodd-countonlyone;
        if(countonlyone%2==1&&countonlyone!=1)
        {
            
            cout<<"problem 1"<<endl;
            cout<<countodd<<"odd"<<endl;
            cout<<countonlyone<<"one"<<endl;
            cout<<counteven<<"even"<<endl;
            countonlyone-=1;
            return countonlyone/2+counteven+(countodd+1)/2;
        }
        else if(countonlyone%2==1&&countonlyone==1)
        {
            cout<<"problem 2"<<endl;
            cout<<countodd<<"odd"<<endl;
            cout<<countonlyone<<"one"<<endl;
            cout<<counteven<<"even"<<endl;
            return countodd+1+counteven;
        }
        else
        {
            cout<<"problem 3"<<endl;
            cout<<countodd<<"odd"<<endl;
            cout<<countonlyone<<"one"<<endl;
            cout<<counteven<<"even"<<endl;
            return countonlyone/2+countodd+counteven;
        }
    }
};