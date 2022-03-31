// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        
         unordered_set<int> set;
        for(int i=0;i<n;++i){
            int current = nums[i];
            
            if(set.count(nums[i])){
                return true;
            } 
            set.insert(nums[i]);
            
            if(set.size()>k){
                set.erase(nums[i-k]);
            }
        }return false;
    }
};
