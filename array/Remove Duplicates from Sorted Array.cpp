// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int l = 1;
        
        if(n==0){
            return 0;
        }
        
        for(int r=1;r<n;r++){
            if(nums[r]!=nums[r-1]){
                nums[l] = nums[r];
                l += 1;
            }
        }
        return l;  
    }
};
