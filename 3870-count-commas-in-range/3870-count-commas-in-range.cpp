class Solution {
public:
    int countCommas(int n) {
        int commas=0;


        if(n<=999){
            return 0;
        }
        if(n>=1000 && n<=99999){
            commas+=n-1000+1;
        }
        if(n>99999){
            commas+=n-1000+1;
        }
        return commas;
        
    }
};