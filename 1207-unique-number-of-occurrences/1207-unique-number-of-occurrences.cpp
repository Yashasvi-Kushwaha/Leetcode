class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> s;
        unordered_map<int,int> um;
        for(int x:arr){
            um[x]++;
        }
        int usize=um.size();
        for(auto it=um.begin();it!=um.end();it++){
            s.insert(it->second);
        }
        int ssize=s.size();
        if(ssize==usize){
            return true;
        }
        return false;
    }
};