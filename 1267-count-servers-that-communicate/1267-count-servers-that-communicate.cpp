class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
       size_t m = grid.size();
       size_t n = grid[1].size();
       vector<int> r(m,0);
       vector<int> c(n,0);
       vector<pair<int,int>> serverGrid;
       int count = 0;
       for(int i = 0; i < m; i++){
            for(int j = 0; j < n;j++){
                if(grid[i][j] == 1){
                r[i]++;
                c[j]++;
                serverGrid.push_back(make_pair(i,j));
                }
            }
        }
        for(pair<int,int> a: serverGrid){
            if((r[a.first] == 1) && (c[a.second] == 1)){
                count++;
            }
        }
        return serverGrid.size() - count;
        
    }
};