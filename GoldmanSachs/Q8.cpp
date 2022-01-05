// problem link : https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/

class Solution {
	public:
	    int help(string str,int n){
	       int dp[n+1]={0};
	        dp[0]=1;
	        dp[1]=1;
	        int mod = 1000000007;
	        for(int i=2;i<=n;i++){
	            if(str[i-1]>'0'){
	                dp[i] = (dp[i]+dp[i-1])%mod;
	            }
	            if(str[i-2]=='1' || str[i-2]=='2' && str[i-1]<='6'){
	                dp[i] = (dp[i]+dp[i-2])%mod;
	            }
	        }
	        return dp[n]%mod;
	    }
		int CountWays(string str){
		   if(str=="0" || str=="")return 0; 
		   if(str[0]=='0')return 0;
		   return help(str,str.size());
		}

};
