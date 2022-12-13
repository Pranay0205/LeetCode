class Solution {
public:
    int BinarySearch(int high, int low, int target, vector<int>& nums){
        while(high >= low){
            int mid = (high+low)/2;   
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
               return BinarySearch(mid-1,low,target,nums);
            }
            else{
                return BinarySearch(high,mid+1,target,nums);
            }
            
           
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
     int val =  BinarySearch(high, low, target, nums);
       return val; 
    }
};