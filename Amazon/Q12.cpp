//question link : https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/


class Solution{
    public:
    string colName (long long int n)
    {
       string ans = "";
       while(n){
           ans = char((n-1)%26+'A')+ans;
           n = (n-1)/26;
       }
       return ans;
    }
};
