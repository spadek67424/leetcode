class Solution:
    def minCost(self, costs: List[List[int]]) -> int:
        if len(costs)==0:
            return 0
        for x in range(1,len(costs)):
            for y in range(len(costs[x])):
                if y==0:
                    costs[x][y]=min(costs[x-1][y+1],costs[x-1][y+2])+costs[x][y]
                if y==1:
                    costs[x][y]=min(costs[x-1][y-1],costs[x-1][y+1])+costs[x][y]
                if y==2:
                    costs[x][y]=min(costs[x-1][y-2],costs[x-1][y-1])+costs[x][y]
                        
        
        return min(costs[-1])
