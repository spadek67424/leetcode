class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        table1=dict()
        table2=dict()
        if len(s)!=len(t):
            return False
        for x,y in zip(s,t):
            if x in table1:
                if table1[x]!=y:
                    return False
            else:
                table1[x]=y
        for x,y in zip(s,t):
            if y in table2:
                if table2[y]!=x:
                    return False
            else:
                table2[y]=x
        return True
