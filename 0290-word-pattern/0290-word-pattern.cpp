class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> u;
        unordered_map<string,char> v;
        vector<string> words;
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                words.push_back(word);
                word="";
            }
        }
        words.push_back(word);

        int s_words=words.size();
        int s_patt=pattern.size();

        if(s_words!=s_patt){
            return false;
        }
        else{
        for(int i=0;i<pattern.size();i++){
            if(u.find(pattern[i])==u.end()){
                u[pattern[i]]=words[i];
            }
            if(u[pattern[i]]!=words[i]){
                return false;
            }
        }
        for(int i=0;i<words.size();i++){
            if(v.find(words[i])==v.end()){
                v[words[i]]=pattern[i];
            }
            if(v[words[i]]!=pattern[i]){
                return false;
            }
        }}
        return true;

    }
};