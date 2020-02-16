class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        table=dict()
        for x in s:
            if x in table.keys():
                table[x]=table[x]+1
            else:
                table[x]=1
        for x in t:
            if x in table.keys():
                table[x]=table[x]-1
            else:
                return False
        for x in table.keys():
            if table[x]!=0:
                return False
        return True
