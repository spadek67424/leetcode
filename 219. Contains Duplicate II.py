class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        table=set()
        for i in range(len(nums)):
            if nums[i] in table:
                return True
            table.add(nums[i])
            if len(table)>k:
                table.remove(nums[i-k])
        return False
