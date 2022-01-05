// question link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#

typedef long long int lli;
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       lli pro = 1;
       lli ans = 0;
       int j=0;
       int i=0;
       while(j<n && i<=j){
           if(pro*a[j]<k){
               ans+= (j-i+1);
               pro = pro*a[j];
           }
           else{
               pro*=a[j];
               while(i<=j && pro>=k){
                   pro/=a[i];
                   i++;
               }
               ans += (j-i+1);
           }
           j++;
       }
       return ans;
    }
};
