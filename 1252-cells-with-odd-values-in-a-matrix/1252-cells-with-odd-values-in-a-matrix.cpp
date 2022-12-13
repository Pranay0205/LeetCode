class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> InitialMat(m, vector<int>(n,0));
        int oddCount=0;
        for(auto el : indices){
            for(int i = 0; i < n; i++){
                InitialMat[el[0]][i]++; 
            }
            for(int i = 0; i < m; i++){
                InitialMat[i][el[1]]++;   
            }
        }
            for(auto i : InitialMat){
                for(auto x: i){
                    if(x%2==1){
                        oddCount++;
                    }
                  
                }
    
            }
    
        return oddCount;   
    }
};