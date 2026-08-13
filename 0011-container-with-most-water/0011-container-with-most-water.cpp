class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int area;
        int maxArea=min(height[left],height[right])*(right-left);
        while(left<right){
        area=min(height[left],height[right])*(right-left);
        if(area>maxArea){
            maxArea=area;
        }
        if(height[left]<height[right]){
        left++;
        }
        else{
        right--;
        }
        }
        return maxArea;
    }
};