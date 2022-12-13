class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     sort(nums1.begin(), nums1.end());
     sort(nums2.begin(), nums2.end());
     set<int> result;
     vector<int> ans;
     
     set_intersection(begin(nums1), end(nums1),  
                 begin(nums2), end(nums2),  
                 inserter(result, end(result)));  
        
        copy(result.begin(), result.end(), back_inserter(ans));
        return ans;
        
    }
};