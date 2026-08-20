class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
        if(s[i]=='I' && s[i+1]=='V'){
            sum+=(5-1);
            i++;
        }
        else if(s[i]=='X' && s[i+1]=='L'){
            sum+=(50-10);
            i++;
        }
        else if(s[i]=='I' && s[i+1]=='X'){
            sum+=(10-1);
            i++;
        }
        else if(s[i]=='X' && s[i+1]=='C'){
            sum+=(100-10);
            i++;
        }
        else if(s[i]=='C' && s[i+1]=='D'){
            sum+=(500-100);
            i++;
        }
        else if(s[i]=='C' && s[i+1]=='M'){
            sum+=(1000-100);
            i++;
        }
        

        else if(s[i]=='I' && s[i+1]!='V' || s[i]=='I' && s[i+1]!='X'){
            sum+=1;
        }
        

        else if(s[i]=='X' && s[i+1]!='L' || s[i]=='X' && s[i+1]!='C'){
            sum+=10;
        }
        
        else if(s[i]=='C' && s[i+1]!='D' || s[i]=='C' && s[i+1]!='M'){
            sum+=100;
        }
        else if(s[i]=='M'){
            sum+=1000;
        }
        else if(s[i]=='L'){
            sum+=50;
        }
        else if(s[i]=='V'){
            sum+=5;
        }
        else if(s[i]=='D'){
            sum+=500;
        }


        }
        return sum;
    }
};