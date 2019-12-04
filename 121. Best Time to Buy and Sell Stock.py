class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minprice=sys.maxsize
        maxprofit=0
        for x in prices:
            if x < minprice:
                minprice=x
            elif(x-minprice>maxprofit):
                maxprofit=x-minprice
        return maxprofit
