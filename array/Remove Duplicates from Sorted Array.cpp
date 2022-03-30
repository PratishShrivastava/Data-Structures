// https://leetcode.com/problems/remove-duplicates-from-sorted-array

// Do you notice something! if we do it normally we have to do it in O(n^2)
// but after two pointer it is done in O(n).

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
