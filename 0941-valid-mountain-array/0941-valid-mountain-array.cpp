class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int req=0;
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=max){
                max=arr[i];
                req=i;
            }
        }
        if(req==arr.size()-1){
            return false;
        }
        if(req==0){
            return false;
        }

        for(int i=0;i<req;i++){
            if(arr[i+1]<=arr[i]){
                return false;
            }
        }
        
        
        for(int j=arr.size()-1;j>req;j--){
            if(arr[j]>=arr[j-1]){
                return false;
            }
        }

        
        
        return true;
        
    }
};