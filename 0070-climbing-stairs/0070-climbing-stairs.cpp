class Solution {
public:
    int climbStairs(int n) {
        
        
        vector<int> Dp(n + 1, 0);
        Dp[0] = 1;

        for(int i = 1; i <= n; i++){

            for(int j = 1; j <= 2; j++){

                if(i - j >= 0){
                    Dp[i] += Dp[i - j];
                }
            }
        }

        return Dp[n];
    }
};