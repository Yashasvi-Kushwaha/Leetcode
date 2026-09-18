class Solution {
public:
    int firstUniqChar(string s) {
       int freq[26]={0};
       for(int x:s){
        freq[x-'a']++;
       }
       int idx=-1;
       for(int i=0;i<s.size();i++){
        if(freq[s[i]-'a']==1){
        idx=i;
        break;
        }
       }
       return idx;

    }
};