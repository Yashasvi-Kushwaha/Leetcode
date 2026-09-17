class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> u;
       int n=nums.size();
       for(int i=0;i<=n;i++){
        u[i]=0;
       }
       int idx;
       for(int x:nums){
        u[x]++;
       }
       for(auto i=u.begin();i!=u.end();i++){
        if(i->second==0){
            idx=i->first;
        }
       }
       return idx;
    }
};