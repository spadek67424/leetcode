class Solution:
    def generatePossibleNextMoves(self, s: str) -> List[str]:
        output=list()
        for i in range(len(s)):
            if s[i:i+2]=="++":
                output.append(s[:i:]+"--"+s[i+2::])
        return output
