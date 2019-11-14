class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output=[]
        for i in range(numRows):
            row=[0 for _ in range(i+1)]
            row[0],row[-1]=1,1
            for j in range(1,len(row)-1):
                row[j]=output[i-1][j-1]+output[i-1][j]
            output.append(row)
        return output
