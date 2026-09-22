class Solution {
public:
    int xorOperation(int n, int start) {
        int req=0;
        for(int i=0;i<n;i++){
            req=req^(start + 2 * i);
        }
        return req;
    }
};