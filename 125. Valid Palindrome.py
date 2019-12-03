class Solution:
    def isPalindrome(self, s: str) -> bool:
        '''
        if len(s)==0:
            return True
        else:
            for x in s:
                if x.isalpha()==False and x.isdigit()==False:
                    s=s.replace(x,"")
            print(s)
            s=s.lower()
            if s[-1::-1]==s[::]:
                return True
            else:
                return False
        '''
        filter_str = [*filter(lambda c:c.isdigit() or c.isalpha(), s.lower())]
        return filter_str[::-1] == filter_str
