int binarySearch(int low, int high, int target, vector<int> &numbers)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (numbers[mid] == target)
        {
            return mid + 1;
        }
        else if (numbers[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

class Solution
{
public:
   vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int complement;
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        complement = binarySearch(i+1, n-1, target - numbers[i], numbers);
        if (complement != -1)
        {
            ans.push_back(i + 1);
            ans.push_back(complement);
        }
    }
    return ans;
}

};