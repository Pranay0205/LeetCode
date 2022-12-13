class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        size_t size = cardPoints.size();
        int score =0;
        
        for(int i=size - k; i<size;++i){
            score+=cardPoints[i];
        }
        int m = score;
        for(int i =0; i< k; i++){
            score += cardPoints[i];
            score -= cardPoints[size - k + i];
            m = max(score,m);
        }
        return m;
    }
};