class Solution:
    def addBinary(self, a: str, b: str) -> str:
        count=0;
        carryout=0
        output=''
        for (i,j) in zip(reversed(a),reversed(b)):
            sum=int(i)+int(j)+carryout
            print(i,j,carryout)
            print(sum)
            if sum>=2:
                carryout=1;
                sum=sum%2;
            else:
                carryout=0
            output+=str(sum)
            count+=1
        print(count)
        if(count<len(a)):
            for i in range(len(a)-count-1,-1,-1):
                print(i)
                sum=int(a[i])+carryout
                if sum>=2:
                    carryout=1;
                    sum=sum%2;
                else:
                    carryout=0;
                output+=str(sum)
        elif(count<len(b)):
            for i in range(len(b)-count-1,-1,-1):
                sum=int(b[i])+carryout
                if sum>=2:
                    carryout=1;
                    sum=sum%2;
                else:
                    carryout=0;
                output+=str(sum)
      
        if carryout==1:
            output+=str(1)
        
        return output[::-1]
