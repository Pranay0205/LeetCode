class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int nBuildings= heights.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        int sum = 0, h;
        for(int i=0 ; i< nBuildings - 1; i++){
            h = heights[i+1]-heights[i];
    
            if(h>0){
                pq.push(h);
            }
            if(pq.size() > ladders){
                sum += pq.top();
                pq.pop();
            }
            if(sum > bricks){
                return i;
            }
                     
        }
        return nBuildings - 1;
        
    }
};