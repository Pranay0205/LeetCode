public class Solution {
    public bool IsAnagram(string s, string t) {
         if (s.Length != t.Length)
                return false;

            Dictionary<char, int> lettersInFirstString = new Dictionary<char, int>();
            Dictionary<char, int> lettersInSecondString = new Dictionary<char, int>();

            for (int i = 0; i < s.Length; i++)
            {
                if (!lettersInFirstString.ContainsKey(s[i]))
                    lettersInFirstString[s[i]] = 1;
                else
                    lettersInFirstString[s[i]]++;
                
                if (!lettersInSecondString.ContainsKey(t[i]))
                    lettersInSecondString[t[i]] = 1;
                else
                    lettersInSecondString[t[i]]++;
            }

            foreach (var kvp in lettersInFirstString)
            {
                if (!lettersInSecondString.ContainsKey(kvp.Key) || lettersInSecondString[kvp.Key] != kvp.Value)
                    return false;
            }

            return true;
    }
}