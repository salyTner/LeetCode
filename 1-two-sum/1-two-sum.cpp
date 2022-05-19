#include<unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret(2,0);
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size(); ++i){
            if(m.find(nums[i])!=m.end()){
                ret[0] = i;
                ret[1] = m[nums[i]];
                return ret;
            }
            
            m.insert({target-nums[i],i});
        }
        
        return ret;
    }
};