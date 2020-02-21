class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxcount=0
        repeatset=set()
        count=0
        index=0
        for i in range(len(s)):
            count=1
            repeatset.add(s[i])
            for j in range(i+1,len(s)):
                if s[j] not in repeatset:
                    repeatset.add(s[j])
                    count+=1
                else:
                    break
            if maxcount<count:
                maxcount=count
            repeatset=set()
        return maxcount
