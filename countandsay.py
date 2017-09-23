class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        cur=list()
        cur.append(1)
        cur.append(-1)
        count=1
        if n==1:
            return "1"
        n=n-1
        for x in range(n):
            count=1
            t=iter(cur)
            cur2=list()
            t.next()
            for y in cur:
                if y==-1:
                    cur2.append(-1)
                    cur=cur2
                    print(cur)
                    continue
               
                whatnext=t.next()
                
                if  y==whatnext:
                    count+=1
                    y=whatnext
                elif whatnext==-1:
                    cur2.append(count)
                    cur2.append(y)
                else:
                    cur2.append(count)
                    cur2.append(y)
                    y=whatnext
                    count=1
        it=iter(cur)
        a=""
        for x in cur:
            if x!=-1:
                a=a+str(x)
        return a
        