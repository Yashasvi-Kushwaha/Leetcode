class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
     

        for(auto i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='{' or s[i]=='('){
            st.push(s[i]);
         
            }
            else if(!st.empty() && (s[i]==']' || s[i]=='}' || s[i]==')')){
                 if(st.top()=='{' && s[i]=='}' || 
                    st.top()=='(' && s[i]==')' ||
                    st.top()=='[' && s[i]==']'){
                       
                        st.pop();
                    }
                    else{
                        return false;
                    }
            }
            else{
                return false;
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
        
    }
};