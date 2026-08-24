class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> u;
        for(int x:nums){
            u[x]++;
        }
        for(auto i=u.begin();i!=u.end();i++){
            if(i->second>1){
                return true;
            }
        }
        return false;
    }
};