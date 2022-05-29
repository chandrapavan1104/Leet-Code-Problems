class Solution {
    int dp[46] = {0};
public:
    int climbStairs(int n) {
        if(n <= 1)
            return 1;
        else{
            if(dp[n] != 0)
                return dp[n];
            else
                dp[n] = climbStairs(n-2) + climbStairs(n-1);
            return dp[n];
        }
    }
};