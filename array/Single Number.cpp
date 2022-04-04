// https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int ret_val=0;
    
        for(int i=0;i<nums.size();i++){
            ret_val^=nums[i];
        }
        return ret_val;
    }
};
