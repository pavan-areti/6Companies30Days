//question link : https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/#


class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int sum =0;
	    for(int i=0;i<n;i++)sum+=arr[i];
	    
	    bool dp[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=sum;j++){
	            if(i==0 && j==0)dp[i][j]=true;
	            else if(i==0)dp[i][j] = false;
	            else if(j==0)dp[i][j] = true; 
                else{
	             if(j>=arr[i-1]) dp[i][j] = (dp[i-1][j] || dp[i-1][j-arr[i-1]]);   
	             else dp[i][j] = dp[i-1][j];
                }
	        }
	    }
	    
	    int ans=sum;
	    for(int j=0;j<=sum;j++){
	       if(dp[n][j])ans = min(ans,abs(sum-2*j));
	    }
	    return ans;
	} 
};
