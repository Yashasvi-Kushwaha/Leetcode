class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int req;
        int x=0;
        for (int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==x){
                    x++;
                    break;
                }
            }
         req=x;
        }
        return req;
    }
};