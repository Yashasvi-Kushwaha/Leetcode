class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
    if(x<0){
        return false;
    }
    if(x==0){
        return true;
    }
    if(x>0){
    while(x>0){
    int r=x%10;
    x=x/10;
    v.push_back(r);
    }}
    int left=0;
    int right=v.size()-1;
    while(left<=right){
    if(v[left]!=v[right]){
      return false;
    }
    else{
    left++;
    right--;
    }}
    return true;
    
    }
};