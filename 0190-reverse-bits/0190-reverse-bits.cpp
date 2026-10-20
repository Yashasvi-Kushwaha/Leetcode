class Solution {
public:
    int reverseBits(int n) {
        vector<int> v;
        while(n>=1){
            v.push_back(n%2);
            n=n/2;
        }
        int cnt=v.size();
        for(int i=cnt;i<=31;i++){
            v.push_back(0);
        }
        int num=0;
        for(int i=0;i<v.size();i++){
            int exp=v.size()-i-1;
            int base=2;
            num=num+(pow(base,exp)*v[i]);
        }
        return num;
    }
};