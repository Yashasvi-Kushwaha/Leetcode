class Solution {
public:
    int countSegments(string s) {
        bool flag=false;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && flag==false){
                continue;
            }
            else if(s[i]!=' '){
                flag=true;
            }
            else if(s[i]==' ' && flag==true){
                count++;
                flag=false;
            }
        }
        if(flag==true){
            count++;
        }
        return count;
    }

};