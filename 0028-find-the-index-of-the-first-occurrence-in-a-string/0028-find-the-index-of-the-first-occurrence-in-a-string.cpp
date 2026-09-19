class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int req=-1;
        if(needle.size()>haystack.size()){
            return -1;
        }
        bool found=false;
        for(int m=0;m<haystack.size();m++){
           
            if(found==true){
                break;
            }
            int j=0;
            int i=m;
            while(j<needle.size() && i<haystack.size()){
                if(haystack[i]==needle[j]){
                    if(i<haystack.size()){
                    i++;
                    j++;
                    if(j>=needle.size()){
                        req=i-j;
                        found=true;
                        break;
                    }
                    }   }
                else{
                    break;
                }
            }
        }
        return req;
       
    }
};