class Solution {
public:
    int maxProduct(vector<int>& nums) {
      size_t size = nums.size();
        int PreProduct = 1;
        int SuffProduct = 1;
        int maxProd = INT_MIN;
    
        for(int i = 0; i< size; i++){
            PreProduct*=nums[i];
            maxProd = max(maxProd,PreProduct);
            if(PreProduct == 0) PreProduct = 1;
            SuffProduct *= nums[size - 1 - i];
            maxProd = max(maxProd,SuffProduct);
            if(SuffProduct == 0) SuffProduct = 1;
        }
        return maxProd;
    }
};