class Solution {
public:
    bool isHappy(int n) {
        int new_n=0;
        int count=0;
        // if(n==1){
        //     return true;
        // }
        
        while(n>0){
            new_n=0;
            while(n>0){
               
                new_n+=(n%10)*(n%10);
                n=n/10;
            
            }
            count++;
            n=new_n;
            if(count>10){
                return false;
            }
            if(n==1){
                return true;
            }
        }
        return true;
    }
};