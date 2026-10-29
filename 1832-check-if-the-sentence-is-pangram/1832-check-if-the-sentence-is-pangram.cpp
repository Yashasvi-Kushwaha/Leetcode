class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> u;
        for(int i=0;i<sentence.size();i++){
            u[sentence[i]]++;
        }
        if(u.size()==26){
            return true;
        }
        return false;
    }
};