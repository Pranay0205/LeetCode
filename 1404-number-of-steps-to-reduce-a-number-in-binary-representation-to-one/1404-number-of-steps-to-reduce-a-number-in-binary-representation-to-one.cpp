class Solution {
public:
    int numSteps(string s) {
        int count = 0;
        auto it = s.rbegin();
         for(; it != s.rend(); ++it){
            if(*it == '1'){
                 ++it;
                if(it!=s.rend()){
                    count+=2;
                }
                   break;
               }
                else{
                    ++count;
            }                  
        }
        for(; it != s.rend(); ++it){
            if(*it == '1'){
                   count+=1;
               }
                else{
                 count+=2;
            }                  
        }
        return count;
    }
};