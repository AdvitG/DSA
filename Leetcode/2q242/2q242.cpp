#include <iostream>
#include <unordered_set>
#include <string>
using namespace std; 
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<char> S;
        unordered_set<char> T; 
        for (char a : s){
            S.insert(a);
        }
        for (char a : t){
            T.insert(a);
        }
        if(S==T){
            return true; 
        } 
        else{
            return false; 
        }
    }
};
int main(){
    
    return 0; 
}