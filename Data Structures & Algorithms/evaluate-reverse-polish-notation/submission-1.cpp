class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ans;
         for(int i = 0; i < tokens.size(); i++){
            // If the token is an operator
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                
                int rightOperand = ans.top(); // First popped is the right side
                ans.pop();
                
                int leftOperand = ans.top();  // Second popped is the left side
                ans.pop();
                
                if(tokens[i] == "+") {
                    ans.push(leftOperand + rightOperand);
                }
                else if(tokens[i] == "-") {
                    ans.push(leftOperand - rightOperand);
                }
                else if(tokens[i] == "*") {
                    ans.push(leftOperand * rightOperand);
                }
                else if(tokens[i] == "/") {
                    ans.push(leftOperand / rightOperand);
                }
            } 
            else {
                // If it's not an operator, it must be a number
                ans.push(stoi(tokens[i]));
            }
        }
        
        return ans.top();
    }};