class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v;
        vector<int> w;
        unordered_map<int,int> u;
        for(int i=0;i<s.size();i++){ 
            v.push_back(s[i]);
            } 
        for(int i=0;i<t.size();i++){ 
            w.push_back(t[i]);
        }
    
    for(int i=0;i<s.size();i++){
        if(u.find(s[i])==u.end()){
        u[s[i]]=t[i];
        }
        if(u[s[i]]!=t[i]){
            return false;
        }
    }
        unordered_map<int,int> u2;

    for(int i=0;i<t.size();i++){
        if(u2.find(t[i])==u2.end()){
        u2[t[i]]=s[i];
        }
        if(u2[t[i]]!=s[i]){
            return false;
        }
    }
   
    return true;
    }
};