// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int min = INT_MAX;
        
        if(n==1){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i+k-1<n;++i){
            if(nums[i+k-1]-nums[i]<min){
                min = nums[i+k-1]-nums[i];
            }
        }return min;
    }
};
