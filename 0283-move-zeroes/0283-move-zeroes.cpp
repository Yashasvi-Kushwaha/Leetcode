class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=left+1;
        while(right<nums.size() && left<right){
            if(nums[left]==0 && nums[right]!=0){
                swap(nums[left],nums[right]);
                right++;
                left++;
            }
            else if(nums[left]!=0){
                left++;
                right++;
            }
            else{
                right++;
            }
            
        }
    }
};