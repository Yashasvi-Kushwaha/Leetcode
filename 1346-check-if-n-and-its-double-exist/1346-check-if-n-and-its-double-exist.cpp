class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> u;
        for(int i=0;i<arr.size();i++){
            if(u.find(arr[i])==u.end()){
                u[arr[i]]=i;
            }
        }
        for(int i=0;i<arr.size();i++){
            
            if(u.find(2*arr[i])!=u.end()){
                auto it=u.find(2*arr[i]);
                if(it->second!=i){
                return true;
                }
                
            }
        }
        return false;
    }
};