class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        if(nums.size()<=1){
            return nums;
        }
        while(right>=left){
        if(nums[right]%2==0 && nums[left]%2!=0){
            swap(nums[right],nums[left]);
            left++;
            right--;
        }
        else if(nums[right]%2==0 && nums[left]%2==0){
            // right--;
            left++;
        }
        else if(nums[left]%2!=0 && nums[right]%2!=0){
            right--;
        }
        else{
            left++;
        }

        }
        return nums;
        
    }
};