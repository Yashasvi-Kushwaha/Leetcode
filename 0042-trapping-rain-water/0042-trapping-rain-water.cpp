class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        int n=height.size();
        int count=0;
        int leftMax=0;
        for(int i=0;i<n;i++){
            left.push_back(leftMax);
            leftMax=max(leftMax,height[i]);
        }
        int rightMax=0;
        for(int i=n-1;i>=0;i--){
            right.push_back(rightMax);
            rightMax=max(rightMax,height[i]);
        }
        for(int i=0;i<n;i++){
            if(min(left[i],right[n-i-1])-height[i]>0){
                count=count+min(left[i],right[n-i-1])-height[i];
            }
        }
        return count;
    }
};