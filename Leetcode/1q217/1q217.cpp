#include <iostream> 
#include <vector>
#include <unordered_set>
using namespace std; 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen; 
        for (int a : nums) {
            if (seen.find(a) != seen.end()) {
                return true;
            }
            seen.insert(a);
        }
        return false; 
    }
};
int main(){
    Solution a; 
    vector<int> v = {1, 1, 3, 4};
    cout<<a.containsDuplicate(v); 

}