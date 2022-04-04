// https://leetcode.com/problems/divide-array-into-equal-pairs/

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> vec(501,0); // Since nums[i] <= 500
        for (auto t:nums) vec[t]++;
        
        for (auto t:vec) 
            if (t%2) return false; // If count is odd, then we can't divide into pairs.
        
        return true;
    }
};
