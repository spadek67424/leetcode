class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        if numRows==1:
            return s
        
        table=list()
        for i in range(0,numRows):
            temp=list()
            table.append(temp)
        print (table)
        count=0
        add=1
        for i in s:
            if count==numRows-1:
                add=-1
            if count==0:
                add=1
            table[count].append(i)
            count+=add
        output=""
        for i in table:
            for j in i:
                output+=j
        return output
