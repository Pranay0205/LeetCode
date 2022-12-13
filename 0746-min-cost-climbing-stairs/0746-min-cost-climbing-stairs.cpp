class Solution {
public:


    int minCostClimbingStairs(vector<int>& cost) {
        size_t costSize = cost.size();
        vector<int> dp(costSize+1) ;
        int OneStepCost = 0;
        int TwoStepCost = 0;
        for(int i=2; i<=costSize; i++){
            OneStepCost = dp[i-1] + cost[i-1];
            TwoStepCost = dp[i-2] + cost[i-2];
            dp[i] = min(OneStepCost, TwoStepCost);
        }
       return dp[costSize];
}
};