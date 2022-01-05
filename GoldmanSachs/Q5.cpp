//problem link : https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	long long getNthUglyNo(int n) {
      long long dp[n];
      dp[0]=1;
      long long c2=0,c3=0,c5=0;
      for(long long i=1;i<n;i++){
          dp[i] = min(dp[c2]*2,min(dp[c3]*3,dp[c5]*5));
          if(dp[c2]*2==dp[i]){
              c2++;
          }
          if(dp[c3]*3==dp[i]){
              c3++;
          }
          if(dp[c5]*5==dp[i]){
              c5++;
          }
      }
	    return dp[n-1];
	}
};
