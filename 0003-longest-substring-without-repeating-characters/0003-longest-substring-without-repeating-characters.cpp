class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> u;
        int left=0;
        int right=0;
        int count=0;
        int max_cnt=count;
        bool flag=false;
        while(right<s.size()){
            if(u.find(s[right])==u.end()){
                u[s[right]]=right;
                right++;
max_cnt=max(max_cnt,right-left);            
            }
            else{
               
                left=max(u[s[right]]+1,left);
                u[s[right]]=right;
                
                // max_cnt=max(max_cnt,count);
                right++;
                // count=right-left;
                max_cnt=max(max_cnt,right-left);            

              flag=true;
            }

        }
        // max_cnt=max()
        if(s.size()==0){
            return 0;
        }
        if(flag==false){
            return s.size();
        }
       
        return max_cnt;
    }
};  