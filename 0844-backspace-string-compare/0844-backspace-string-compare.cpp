class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;
        for(int i=0;i<s.size();i++){
            if(st.empty() && s[i]=='#'){
                continue;
            }
            if(st.empty() && s[i]!='#'){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]!='#'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        for(int i=0;i<t.size();i++){
            if(tt.empty() && t[i]=='#'){
                continue;
            }
            if(tt.empty() && t[i]!='#'){
                tt.push(t[i]);
            }
            else if(!tt.empty() && t[i]!='#'){
                tt.push(t[i]);
            }
            else{
                tt.pop();
            }
        }
        string s2;
        string t2;
        while(!st.empty()){
            s2.push_back(st.top());
            st.pop();
        }
        while(!tt.empty()){
            t2.push_back(tt.top());
            tt.pop();
        }
        return (s2==t2);
    }
};