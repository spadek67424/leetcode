class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        output=list()
        carryout=0
        temp=0
        carryout=0
        adder=1
        for i in reversed(digits):
            temp=i+adder+carryout
            if temp>=10:
                temp=temp-10
                carryout=1
            else:
                carryout=0
            output.insert(0,temp)
            adder=0
        if output[0]==0 and carryout==1:
            output.insert(0,carryout)
        return output
