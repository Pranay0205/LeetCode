class Solution {
public:
    int numDecodings(string s) {
         size_t size = s.size();
if (s[0] == '0')
    return 0;
vector<int> dp(size + 1, 0);
dp[0] = 1;
dp[1] = 1;
for (int i = 1; i < size; i++)
{
    if ((s[i - 1] == '0' || s[i - 1] > '2') && s[i] == '0')
    {
        return 0;
    }
    else if (size >= i + 2 && s[i + 1] == '0')
    {
        dp[i + 1] = dp[i];
    }
    else if (((s[i - 1] == '1' && s[i] != '0') || (s[i - 1] == '2' && s[i] <= '6' && s[i] != '0')))
    {
        dp[i + 1] = dp[i] + dp[i - 1];
    }
    else
    {
        dp[i + 1] = dp[i];
    }
}

return dp[size];

    
    }
};