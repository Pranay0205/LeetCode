class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        size_t row_size = mat.size();
        size_t col_size = mat[1].size();
        
        vector<int> rows(row_size, 0);
        vector<int> columns(col_size, 0);
        
        int spacialPositions = 0;
        
        for(int i = 0; i<row_size; i++){
            for(int j = 0; j< col_size; j++){
                if(mat[i][j] == 1){
                  ++rows[i];    
                  ++columns[j]; 
               }
            }
        } 
        
         for(int i = 0; i<row_size; i++){
            for(int j = 0; j< col_size; j++){
                if(mat[i][j] == 1 && rows[i] == 1 && columns[j] == 1){
                 ++spacialPositions;
               }
            }
        } 
        
        return spacialPositions;
    }
};

