class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int sum=0;
        for(int x:nums){
            sum+=x;
            v.push_back(sum);
        }
        return v;
    }
};