#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        vector <int> stack;
        int num1;
        int num2;
        for(int i = 0; i < tokens.size(); ++i){
            if(tokens[i] == "+"){
                num2 = stack.back();
                stack.pop_back();
                num1 = stack.back();
                stack.pop_back();
                stack.push_back(num1 + num2);
            }
            else if(tokens[i] == "-"){
                num2 = stack.back();
                stack.pop_back();
                num1 = stack.back();
                stack.pop_back();
                stack.push_back(num1 - num2);
            }
            else if(tokens[i] == "*"){
                num2 = stack.back();
                stack.pop_back();
                num1 = stack.back();
                stack.pop_back();
                stack.push_back(num1 * num2);
            }
            else if(tokens[i] == "/"){
                num2 = stack.back();
                stack.pop_back();
                num1 = stack.back();
                stack.pop_back();
                stack.push_back(num1 / num2);
            }
            else{
                stack.push_back(stoi(tokens[i]));
            }
        }
        return stack.back();
    }
};

int main(){
  vector <string> s = {"0","3","/"};
  int result;
  Solution *p = new Solution();
  result = p->evalRPN(s);
  cout << result << endl;
}