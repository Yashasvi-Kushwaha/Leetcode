class Solution {
public:

int partition(vector<int> &nums, int low,int high){
    int mid=low+(high-low)/2;
    int pivot=nums[mid];
    int left=low-1;
    int right=high+1;
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
    void wiggleSort(vector<int>& nums) {

        int low=0;
        int high=nums.size()-1;
        quickSort(nums,low,high);
        
        vector<int> v;


       
        int m=low+(high-low)/2;
        int left=m;
        int right=nums.size()-1;


       
            while(left>=0 && right>m){
            v.push_back(nums[left]);
            v.push_back(nums[right]);
            left--;
            right--;
        }
            while(left>=0){
            v.push_back(nums[left]);
            left--;
        }
            while(right>m){
            v.push_back(nums[right]);
            right--;
        }
        // for(int i=0;i<=(v.size()-1)/2;i++){
        //     if(i%2!=0 && i!=v.size()-1){
        //        if(v[i]>v[i+1] && v[i]>v[i-1]){
        //         continue;
        //        }
        //        else{
        //         swap(v[i-1],v[v.size()-1-i]);
        //         swap(v[i],v[v.size()-i]);


        //         }
        //        }
        //        else{
        //         continue;
        //        }
        //     }
        

        
        nums=v;

        
    }
};