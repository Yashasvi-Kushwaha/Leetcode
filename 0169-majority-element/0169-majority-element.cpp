class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int n=nums.size();
        int max=n/2;
        int idx=0;
        for(auto i=freq.begin();i!=freq.end();i++){
         if(i->second>max)
          idx=i->first;
        }
        return idx;
    }
};