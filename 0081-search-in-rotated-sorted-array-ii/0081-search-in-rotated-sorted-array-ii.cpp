class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.empty()){
            return false;
        }
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<=nums[high]){
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            else if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==target)
                    return true;
                }
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
                    if(nums[i]==target){
                      return true;
                    }}
                    
        return false;
    }
};