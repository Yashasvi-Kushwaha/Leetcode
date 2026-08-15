class Solution {
public:
    int addDigits(int num) {
        long sum=0;
        recheck:
        while(num>0){
            int r=num%10;
            num=num/10;
           sum=r+sum;
        }
        num=sum;
        sum=0;
        if(num/10!=0)
        goto recheck;
        return num;
    }
};