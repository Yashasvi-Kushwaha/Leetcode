class Solution {
public:
    bool isHappy(int n) {
        int new_n=0;
        int count=0;
       
        unordered_set<int> s;
        
        while(n>0){
            new_n=0;
            if(s.find(n)==s.end()){
                s.insert(n);
                
            }
            else{
                return false;
            }
            while(n>0){
               
                new_n+=(n%10)*(n%10);
                n=n/10;
            
            }
            n=new_n;
            
            if(n==1){
                return true;
            }
        }
        return true;
    }
};