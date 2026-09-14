class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        int n=nums.size();
        int pro=1;
        for(int i=0;i<nums.size();i++){
            left.push_back(pro);
            pro*=nums[i];
        }
        pro=1;
        for(int i=n-1;i>=0;i--){
            right.push_back(pro);
            pro*=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=left[i]*right[n-i-1];
        }
        
        return nums;
    }
};