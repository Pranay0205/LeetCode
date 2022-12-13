class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tLength = t.size();
        int sLength = s.size();
        
        if(tLength == 0 && sLength == 0){
            return true;
        }
        int x = 0;
        for(int i = 0; i< tLength; i++){
                if(s[x] == t[i]){
                    x++;
                }
                if(x==sLength){
                    return true;
                }
        }
        return false;
    }
};