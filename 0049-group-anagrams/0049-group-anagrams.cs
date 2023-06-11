public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
         var groupAnagramsList = new Dictionary<string, IList<string>>();

            foreach (string s in strs)
            {
                char[] hash = new char[26];

                foreach (char c in s)
                {
                    hash[c - 'a']++;
                }

                string key = new string(hash);

                if (!groupAnagramsList.ContainsKey(key)) {

                    groupAnagramsList[key] = new List<string>();
                
                }
                groupAnagramsList[key].Add(s);

            }
            return groupAnagramsList.Values.ToList();  
    }
}