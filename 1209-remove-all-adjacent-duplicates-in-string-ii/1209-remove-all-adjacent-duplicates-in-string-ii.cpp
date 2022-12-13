class Solution {
public:
string removeDuplicates(string s, int k)
{
    int n = s.size();
    int count = 1;
    int flag = true;
    while (flag == true && n > k)
    {
        flag = false;
        count = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count == k)
            {
                s.erase(i, k);
                n = n - k;
                count = 1;
                flag = true;
            }
        }
    }

    return s;
}
};