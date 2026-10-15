class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> idx;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    idx.push_back(j);
                    break;
                }
            }
        }
        for(int i=0;i<idx.size();i++){
            int req=idx[i];
            int nxtGrt=nums2[req];
            for(int j=req;j<nums2.size();j++){
                if(nums2[j]>nxtGrt){
                    nxtGrt=nums2[j];
                    break;
                }

            }
            if(nxtGrt==nums2[req]){
                ans.push_back(-1);
            }
            else{
                ans.push_back(nxtGrt);
            }
        }
        return ans;
    }
};