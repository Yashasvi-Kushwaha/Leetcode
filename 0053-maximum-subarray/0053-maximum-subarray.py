class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currMax=nums[0]
        maxSum=nums[0]
        n=len(nums)
        for i in range (1,n):
            currMax=max(currMax+nums[i],nums[i])
            maxSum=max(maxSum,currMax)

        return maxSum