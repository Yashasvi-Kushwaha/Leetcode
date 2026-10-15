class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operand;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="/"|| tokens[i]=="*"|| tokens[i]=="+"|| tokens[i]=="-"){
                int op2=operand.top();
                operand.pop();
                int op1=operand.top();
                operand.pop();
                if(tokens[i]=="/"){
                operand.push(op1/op2);
                }
                else if(tokens[i]=="-"){
                operand.push(op1-op2);
                }
                else if(tokens[i]=="+"){
                operand.push(op1+op2);
                }
                else if(tokens[i]=="*"){
                operand.push(op1*op2);
                }
                

            }
            else{
                int x=stoi(tokens[i]);
                operand.push(x);
            }
        }
        return operand.top();
    }
};