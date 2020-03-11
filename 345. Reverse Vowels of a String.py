class Solution:
    def reverseVowels(self, s: str) -> str:
        flag1=0
        flag2=len(s)-1
        vowel=["a","e","i","o","u","A","E","I","O","U"]
        while flag1<flag2:
            while s[flag1] not in vowel and flag1<len(s)-1:
                flag1+=1
            while s[flag2] not in vowel and flag2>=0:
                flag2-=1
            if flag1>flag2:
                break
            print(flag1,flag2)
            if (s[flag1] in vowel) and (s[flag2] in vowel):
                print(flag1,flag2)
                temp=s[flag2]
                s=s[0:flag2:]+s[flag1]+s[flag2+1::]
                s=s[0:flag1:]+temp+s[flag1+1::]
                flag1+=1
                flag2-=1
        return s
