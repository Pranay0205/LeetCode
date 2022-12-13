class Solution {
public:
    int maxProduct(vector<int>& nums) {
        size_t s = nums.size();
        sort(nums.begin(), nums.end());
        
        return (nums[s - 1] - 1) * (nums[s - 2] - 1);
    }
};