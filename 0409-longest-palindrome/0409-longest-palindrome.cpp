class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()<=1){
        return s.size();
        }
        unordered_map<char,int> u;
        for(int i=0;i<s.size();i++){
            u[s[i]]++;
        }
        int len=0;
        int n_cnt=0;
        for(auto x:u){
            if(x.second%2==0){
                len+=x.second;
            }
            else{
                len+=x.second-1;
                n_cnt++;
            }
        }
        
        if(n_cnt==0){
            return len;
        }
        return len+1;
    }
};