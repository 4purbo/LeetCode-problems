# BruteForce
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        result: list[int] = []
        terminate = False # Used to stop the loop when we find the match
        for x in nums:
            x_i = nums.index(x)
            for y_i in range(x_i + 1, len(nums)):
                y = nums[y_i]
                if x+y == target:
                    result.append(x_i)
                    result.append(y_i)
                    terminate = True
                    if terminate:
                        break
            if terminate:
                break
        return result