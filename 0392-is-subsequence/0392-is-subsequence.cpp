class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st;
        stack<char> tt;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            tt.push(t[i]);
        }

        while(!st.empty() && !tt.empty()){
        if(st.top()==tt.top()){
            st.pop();
            tt.pop();
        }
        else{
            tt.pop();

        }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};