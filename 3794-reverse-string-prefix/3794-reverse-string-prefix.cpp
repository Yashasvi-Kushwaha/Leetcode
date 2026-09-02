class Solution {
public:
    string reversePrefix(string s, int k) {
        for(int i=0,n=k;i<=k/2, n>k/2;i++,n--){
            swap(s[i],s[n-1]);
        }
        return s;
    }
};