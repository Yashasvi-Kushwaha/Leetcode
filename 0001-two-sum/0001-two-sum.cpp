class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> u;
        for(int i=0;i<nums.size();i++){
     int req=target-nums[i];
     auto it=u.find(req);
     if(it!=u.end()){
        return {i,it->second};
        
     }
else{
    u[nums[i]]=i;
}
        }
        return {};
    }
};