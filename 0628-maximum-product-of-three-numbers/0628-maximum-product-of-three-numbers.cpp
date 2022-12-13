class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        size_t size = nums.size() - 1;
        sort(nums.begin(), nums.end());
        
        int lastThree = nums[size] * nums[size-1] * nums[size-2];
        int mixedThree = nums[0] * nums[1] * nums[size];
        
        return max(lastThree, mixedThree); 
        
    }
};