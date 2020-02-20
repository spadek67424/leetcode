class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        import string
        for i in string.punctuation:
            paragraph=paragraph.replace(i," ")
        output=collections.Counter(paragraph.lower().split())
        for i in banned:
            output[i.lower()]=0
        maxcount=0
        for i in output.keys():
            print(i,output[i])
            if output[i]>maxcount:
                maxcount=output[i]
                out=i
        return out
