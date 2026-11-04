class Solution {
public:
    bool rotateString(string s, string goal) {
       int len=s.size();
       if(s.size()!=goal.size()){
        return false;
       }
       set<string> str;
       str.insert(s);
       for(int i=0;i<len;i++){
        char temp=s[0];
         for(int j=0;j<len;j++){
         s[j]=s[j+1];
       }
       s[len-1]=temp;
       str.insert(s);

       }
       auto it=str.find(goal);
       if(it!=str.end()){
        return true;
       }
      return false;
    }
};