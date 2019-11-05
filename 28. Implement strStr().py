class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        i=0
        j=0
        if(len(haystack)==0 and len(needle)==0):
            return 0
        elif(len(haystack)==0 and len(needle)!=0):
            return -1
        elif(len(haystack)!=0 and len(needle)==0):
            return 0
        while(i<len(haystack)):
            if(haystack[i]==needle[j]):
                if(j==len(needle)-1):
                    return i-j
                
                i+=1
                j+=1
            else:
                i=i-j+1
                j=0
            
        return -1
