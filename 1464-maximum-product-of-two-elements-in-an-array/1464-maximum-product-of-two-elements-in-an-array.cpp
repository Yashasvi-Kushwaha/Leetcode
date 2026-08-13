class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int Pro=(nums[i]-1)*(nums[j]-1);
                if(Pro>maxP){
                    maxP=Pro;
                }
            }
        }
        return maxP;
    }
};