public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> uniqueNumbers = new HashSet<int>();
            int arrayLength = nums.Length;
            for (int i = 0; i < arrayLength; i++)
            {
                if (!uniqueNumbers.Contains(nums[i])) { 
                     uniqueNumbers.Add(nums[i]);
                }
                else
                {
                    return true;
                }
            }
        return false;
    }
}