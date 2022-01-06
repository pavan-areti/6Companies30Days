// question link : https://practice.geeksforgeeks.org/problems/maximum-profit4657/1#


class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        int dp[N][K+1];
        for(int i=0;i<N;i++){
            for(int j=0;j<=K;j++){
                if(i==0 || j==0)dp[i][j]=0;
                else{
                    dp[i][j] = dp[i-1][j];
                    for(int k=i-1;k>=0;k--){
                        dp[i][j] = max(dp[i][j],dp[k][j-1]+(A[i]-A[k]));
                    }
                }
            }
        }
        return dp[N-1][K];
    }
};
