class Solution {
public:

    int partition(vector<int>&nums,int low,int high){
    int left=low-1;
    int right=high+1;
    int mid=low+(high-low)/2;
    int pivot=nums[mid];

    while(true){
    do{
        left++;
    }
    while(nums[left]<pivot);
    do{
        right--;
    }
    while(nums[right]>pivot);

    if(left>=right){
        return right;
    }
   
    swap(nums[left],nums[right]);

    }
  
    }
    void quickSort(vector<int>& nums, int low, int high){
    if(low>=high){
        return;
    }
    
    int part=partition(nums,low,high);
    quickSort(nums,low,part);
    quickSort(nums,part+1,high);

    }
    void sortColors(vector<int>& nums) {
    int low=0;
    int high=nums.size()-1;
    quickSort(nums,low,high);

    
    
    
    }
};