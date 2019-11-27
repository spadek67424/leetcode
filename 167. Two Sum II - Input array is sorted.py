class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        x=0
        y=len(numbers)-1
        output=numbers[x]+numbers[y]
        while output!=target:
            if output<target:
                x+=1
            else:
                y-=1
            output=numbers[x]+numbers[y]
        return [x+1,y+1]
