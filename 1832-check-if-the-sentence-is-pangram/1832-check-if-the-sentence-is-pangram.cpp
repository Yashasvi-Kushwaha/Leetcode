class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> u;
        for(char ch:sentence){
            u[ch]++;
        }
        if(u.size()==26){
            return true;
        }
        return false;
    }
};