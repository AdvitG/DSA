#include <iostream> 
#include <vector>
using namespace std; 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> comp; 
        comp.push_back(nums[0]); 
        for (int i = 1; i < nums.size(); i++) {
            //cout<<"in";  
            for(int j=0; j < comp.size();j++)
                //cout<<"in"; 
                if(comp[j]==nums[i]){
                    return true; 
                }
            comp.push_back(nums[i]); 
            
            
        }
        return false; 
    }
};
int main(){
    Solution a; 
    vector<int> v = {1, 1, 3, 4};
    cout<<a.containsDuplicate(v); 

}
