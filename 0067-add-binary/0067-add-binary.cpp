class Solution {
public:
    string addBinary(string a, string b) {
        stack<char> s;
        stack<char> t;
        string ans;
        for(int i=0;i<a.size();i++){
            s.push(a[i]);
        }
        for(int i=0;i<b.size();i++){
            t.push(b[i]);
        }
        char carry='0';
        while(!s.empty() && !t.empty()){
        if(s.top()=='0' && t.top()=='0' && carry=='0'){
        ans.push_back('0');
        carry='0';
        s.pop();
        t.pop();
        }
        else if(s.top()=='0' && t.top()=='0' && carry=='1'){
        ans.push_back('1');
        carry='0';
        s.pop();
        t.pop();
        }
        else if(s.top()=='1' && t.top()=='1' && carry=='0'){
        ans.push_back('0');
        carry='1';
        s.pop();
        t.pop();
        }
        else if(s.top()=='1' && t.top()=='1' && carry=='1'){
        ans.push_back('1');
        carry='1';
        s.pop();
        t.pop();
        }
        else if((s.top()=='1' && t.top()=='0' && carry=='1') || (
        s.top()=='0' && t.top()=='1' && carry=='1')){
        ans.push_back('0');
        carry='1';
        s.pop();
        t.pop();
        }
        else{
        ans.push_back('1');
        carry='0';
        s.pop();
        t.pop();
        }
        }
        while(!s.empty()){
            if((s.top()=='1' && carry=='0') || (s.top()=='0' && carry=='1')){
                ans.push_back('1');
                carry='0';
                s.pop();
            }
            else if(s.top()=='0' && carry=='0'){
                ans.push_back('0');
                carry='0';
                s.pop();
            }
            else {
                ans.push_back('0');
                carry='1';
                s.pop();
            }
        }
        while(!t.empty()){
            if(t.top()=='1' && carry=='0' || t.top()=='0' && carry=='1'){
                ans.push_back('1');
                carry='0';
                t.pop();
            }
            else if(t.top()=='0' && carry=='0'){
                ans.push_back('0');
                carry='0';
                t.pop();
            }
            else {
                ans.push_back('0');
                carry='1';
                t.pop();
            }
        }
        ans.push_back(carry);
        
        int req=ans.size()-1;
        for(int i=ans.size()-1;i>=0;i--){
            if (ans[i]=='0'){
                ans.pop_back();
            }
            else if(ans[i]=='1'){
                break;
            }
        }
        
        reverse(ans.begin(),ans.end());
        if(ans.empty()){
            ans.push_back('0');
        }
        return ans;
    }
};