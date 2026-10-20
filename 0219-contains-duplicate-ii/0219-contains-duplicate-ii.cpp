class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> u;
        for(int i=0;i<nums.size();i++){
            auto it=u.find(nums[i]);
            if(it==u.end()){
                u[nums[i]]=i;
            }
            else if(it!=u.end()){
                int req=it->second;
                if(abs(req-i)<=k){
                    return true;
                }
                else{
                    it->second=i;
                }
            }
        }
        return false;
    }
};