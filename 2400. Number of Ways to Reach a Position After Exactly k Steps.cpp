class Solution {
public:
    int dp[5000][1001];
    int mod = 1e9 + 7;
    int solve(int k,int startPos,int endPos){
        if(k == 0){
           if(startPos == endPos){
               return 1;
           }
           return 0;
        }
        if(dp[startPos+1000][k] != -1){
            return dp[startPos+1000][k];
        }
        // one step forward
        int a = solve(k-1,startPos+1,endPos);
        // one step backward
        int b = solve(k-1,startPos-1,endPos);
        return dp[startPos+1000][k] = (a+b)%mod;
    }
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp,-1,sizeof(dp));
        int ans = solve(k,startPos,endPos);
        return ans;
    }
};