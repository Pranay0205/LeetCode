class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        size_t size1 = matrix.size();
        size_t size2 = matrix[0].size();
        int start1 = 0;
        int start2 = 0;
        
        vector<int> answer;
        
        vector<vector<int>> visited(size1, vector<int>(size2, 0));
        
        int i = 0;
        int j = 0;
        int limit = size1 * size2;
        int count  = 0;
        
    if(limit == 1){
        answer.push_back(matrix[i][j]);
        return answer; 
    }
        
    while(count < limit ){        
    
            for(; j < size2 && visited[i][j] == 0 ; j++){
               answer.push_back(matrix[i][j]);
                visited[i][j] = 1;
                count++;
                cout << matrix[i][j];
            }
            ++i;
            --j;
            for(; i < size1 && visited[i][j] == 0 ; i++){
                answer.push_back(matrix[i][j]);
                visited[i][j] = 1;
                count++;
                cout << matrix[i][j];
            }
            start1++;
            --i; --j;

            for(; j >= start2 && visited[i][j] == 0; j--){
                answer.push_back(matrix[i][j]);
                visited[i][j] = 1;
                count++;
                cout << matrix[i][j];
            }
            ++j; --i;
            for(; i > start1 && visited[i][j] == 0; i--){
                answer.push_back(matrix[i][j]);
                visited[i][j] = 1;
                count++;
                cout << matrix[i][j];
            }        
                
    }
        
        return answer;
};

} ;
    