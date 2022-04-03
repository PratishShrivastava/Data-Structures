// https://leetcode.com/problems/find-the-middle-index-in-array

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> leftsum(n+1),rightsum(n+1);
        
        for(int i=0;i<n;++i){
            leftsum[i+1] = leftsum[i]+nums[i];
        }
        
        for(int i=n-1;i>=0;i--){
            rightsum[i] = rightsum[i+1] + nums[i];
        }
        
        for(int i=0;i<n;++i){
            if(leftsum[i] == rightsum[i+1]) return i;
        }
        
        return -1;
    }
};
