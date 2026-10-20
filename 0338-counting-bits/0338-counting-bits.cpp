class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int count=0;
        for(int i=0;i<=n;i++){
            count=0;
            
            int val=i;
            while(val>=1){
                
                int r=val%2;
                val=val/2;
                if(r==1){
                count++;
                }
                
            }
            v.push_back(count);
        }
        return v;
    }
};