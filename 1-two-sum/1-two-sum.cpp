#include<unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret(2,0);
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size(); ++i){
            m.insert({nums[i],i});
        }
        
        int candi;
        for(int i=0; i<nums.size(); ++i){
            candi = target-nums[i];
            if(m.find(candi)!=m.end() && i != m[candi]){
                ret[0] = i;
                ret[1] = m[candi];
                break;
            }
        }
        
        return ret;
    }
};