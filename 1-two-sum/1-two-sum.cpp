#include<unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret(2,0);
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size(); ++i){
            m.insert({target-nums[i],i});
            
            if(m.find(nums[i])!=m.end() && i != m[nums[i]]){
                ret[0] = i;
                ret[1] = m[nums[i]];
                break;
            }
        }
        
        return ret;
    }
};