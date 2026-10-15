class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]!=st.top()){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        string s2;
        while(!st.empty()){
            s2.push_back(st.top());
            st.pop();
        }
        reverse(s2.begin(),s2.end());
        
        return s2;
    }
};