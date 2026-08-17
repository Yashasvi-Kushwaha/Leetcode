class Solution:
    def isPalindrome(self, x: int) -> bool:
        num=0
        y=x
        if(x<0):
            return False
        if(x==0):
            return True
        while(x>0):
            r=x%10
            num=(num*10)+r
            x=x//10
        if(y==num):
            return True
        else:
            return False