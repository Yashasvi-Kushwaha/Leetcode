class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int m=low+(high-low)/2;
        int l=m;
        int r=high;
        while(l>=0 && r>m){
            v.push_back(nums[l]);
            v.push_back(nums[r]);
            r--;
            l--;
        }
        while(l>=0){
            v.push_back(nums[l]);
            l--;
        }
        while(r>m){
            v.push_back(nums[r]);
            r--;
        }
    nums=v;
    return nums;
    }
};