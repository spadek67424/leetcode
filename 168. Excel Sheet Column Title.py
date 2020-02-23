class Solution:
    def convertToTitle(self, n: int) -> str:
        if n==1:
            return "A"
        table=list()
        while n>0:
            n=n-1
            table.append(n%26)
            n=int(n/26)
        table.reverse()
        print(table)
        output=""
        for x in table:
            output=output+str(chr(x+65))
        print(output)
        return output
