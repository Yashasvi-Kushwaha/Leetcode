class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x:nums){
            if(s.find(x)==s.end()){
                s.insert(x);
            }
            else{
                return true;
            }
        }
        return false;
    }
};