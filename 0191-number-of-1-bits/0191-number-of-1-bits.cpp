class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
        while(n>=1){
            int r=n%2;
            n=n/2;
            if(r==1){
                cnt++;
            }
        }
        return cnt;
    }
};