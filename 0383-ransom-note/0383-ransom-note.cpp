class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> u1;
        unordered_map<char,int> u2;

        for(char c:ransomNote){
            u1[c]++;
        }
        for(char c:magazine){
            u2[c]++;
        }
        for(char c:ransomNote){
            if(u2[c]>=u1[c]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};