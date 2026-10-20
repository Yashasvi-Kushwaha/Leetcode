class Solution {
public:
    bool isUgly(int n) {
        vector<int> factor;
        if(n<=0){
            return false;
        }
        float exp=0.5;
        float root=pow(n,exp);
        for(int i=2;i<=root;i++){
            while(n%i==0){
                factor.push_back(i);
                n=n/i;
            }
        }
        if(n>1){
        factor.push_back(n);
        }
        // for(int i=0;i<factor.size();i++){
        //     if(factor[i]==2 || factor[i]==3 || factor[i]==5){
        //         continue;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        for(int x:factor){
            if(x==2 || x==3 || x==5){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};