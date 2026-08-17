class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> u;
        vector<int> v;
        int n=nums.size();
        int max= n/3;
        for(int x:nums){
            u[x]++;
        }
        for(auto i=u.begin();i!=u.end();i++){
            if(i->second >max){
                v.push_back(i->first);
            }
        }
        return v;
    }
};