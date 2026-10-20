class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int carry=0;
        int n=digits.size()-1;
        digits[n]++;
        
        
        for(int i=n;i>=0;i--){
           
            digits[i]=digits[i]+carry;
            carry=digits[i]/10;
            digits[i]=digits[i]%10;
            
        }
        if(carry>=1){
            v.push_back(carry);
            for(int x: digits){
                v.push_back(x);
            }
            digits=v;
        }
        
        return digits;
    }
};