#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                stack.push(s[i]);
            }
            if(s[i]=='}'){
                if(stack.empty()){
                return false;
                }
                if(stack.top()=='{'){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i]==')'){
                if(stack.empty()){
                return false;
                }
                if(stack.top()=='('){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i]==']' ){
                if(stack.empty()){
                return false;
                }
                if(stack.top()=='['){
                    stack.pop(); 
                }
                else{
                    return false;
                } 
            }
            
        }
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    string a = "()"; 
    Solution b;
    b.isValid(a); 
}