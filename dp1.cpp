int climbStairsRecFunc(int A, vector<int> &dp)
{
    int mod = 1e9+7;
    //bc
    if(A<2) return 1;
    if(dp[A] != -1) return dp[A];
    dp[A] = (climbStairsRecFunc(A-1,dp) + climbStairsRecFunc(A-2,dp))%mod;
    return dp[A];
}
int Solution::climbStairs(int A) {
    vector<int>dp(A+1,-1);
    return climbStairsRecFunc(A,dp);
}
