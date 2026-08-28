class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
    int left=0;
    int right=0;
    while(left<m && right<n){
        if(nums1[left]<=nums2[right]){
            v.push_back(nums1[left]);
           left++;
        }
        else{
            v.push_back(nums2[right]);
            right++;
        }
    }
    while(left<m){
        v.push_back(nums1[left]);
        left++;
    }
    while(right<n){
        v.push_back(nums2[right]);
        right++;

    }
    for(int i=0;i<n+m;i++){
        nums1[i]=v[i];
    }
    
    }
};