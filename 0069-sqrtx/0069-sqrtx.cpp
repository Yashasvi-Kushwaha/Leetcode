class Solution {
public:
    int mySqrt(int x) {
        long long val=0;
        for(long long i=1;i*i<=x;i++){
            val++;
        }
        return val;
    }
};