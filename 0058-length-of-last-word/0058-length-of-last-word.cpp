class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int max_count=0;
        for(int i=0;i<s.size();){
            if(s[i]==' '){
                count=0;
             i++;
            }
            else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            count++;
            i++;
            max_count=count;
            }
           
            }
        
        return max_count;
    }
};