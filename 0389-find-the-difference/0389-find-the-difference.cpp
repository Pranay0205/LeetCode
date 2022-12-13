class Solution {
public:
    char findTheDifference(string s, string t) {        
    map<char, int> sMap;
    map<char, int> tMap;
    size_t sSize = s.size();
    for(int i= 0; i< sSize; i++){
        if(sMap.find(s[i]) != sMap.end()){
            sMap[s[i]]++;
          
        }
        else{
            sMap.insert(make_pair(s[i],1));
        }
        
         if(tMap.find(t[i]) != tMap.end()){
           tMap[t[i]]++;
        }
        else{
            tMap.insert(make_pair(t[i],1));
        }
    }
    tMap[t[sSize]]++; 
        
    for(char i = 97; i<97+26; i++){
       if(sMap[i] != tMap[i]){
           cout << sMap[i] << " " << tMap[i] << "\n";
           return i;
       } 
    }
    
    
    return '0';
    }
};