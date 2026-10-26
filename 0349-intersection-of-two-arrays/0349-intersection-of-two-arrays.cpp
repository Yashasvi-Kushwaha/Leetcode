class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> s;
       vector<int> v;
       for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j] && s.find(nums1[i])==s.end()){
                s.insert(nums1[i]);
            }
        }
       } 
       for(int x:s){
        v.push_back(x);
       }
       return v;
    }
};