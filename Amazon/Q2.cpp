//question link : https://leetcode.com/problems/longest-mountain-in-array/submissions/


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int left[n];
        left[0]=1;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                left[i] = left[i-1]+1;
            }
            else{
                left[i] = 1;
            }
        }
        
        int right[n];
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                right[i] = right[i+1]+1;
            }
            else{
                right[i] = 1;
            }
        }
        
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(right[i]!=1 && left[i]!=1)
            ans = max(ans,right[i]+left[i]-1);
        }
        
        return (ans==INT_MIN)?0:ans;
    }
};
