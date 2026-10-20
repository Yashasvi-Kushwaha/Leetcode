class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max=INT_MIN;
        int s_max=INT_MIN;
        int t_max=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max){
                max=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=s_max && nums[i]<max){
                s_max=nums[i];
            }
        }
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=t_max && nums[i]<s_max){
                t_max=nums[i];
                flag=true;
            }
        }

        if(flag==false){
            return max;
        }
        return t_max;

    }
};