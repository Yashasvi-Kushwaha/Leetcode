class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        long long currSum=nums[0];
        int minLen=INT_MAX;
    
        while(right<nums.size()){
       
        if(currSum>=target){
            int len=right-left+1;
            
            currSum=currSum-nums[left];
            left++;
            minLen=min(minLen,len);
        }
        else{
           
        right++;
         if(right<nums.size()){
        currSum=currSum+nums[right];
        }}
     
        }
        if(minLen!=INT_MAX)
        return minLen;
        else{
            return 0;
        }
    }
};