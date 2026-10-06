class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int l=nums[0];
        int r=nums[nums.size()-1];

        if(l<=r){
            
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i+1]>=nums[i]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        else{
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i+1]<=nums[i]){
                    continue;
                }
                else{
                    return false;
                }
            }

        }
        return true;
    }
};