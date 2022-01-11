// question link : https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ans(n);
       stack<int> s;
       
       for(int i=0;i<n;i++){
               while(!s.empty() && price[s.top()]<=price[i]){
                   s.pop();
               }
               if(s.empty()){
                   ans[i]=i+1;
               }
               else{
                   ans[i] = i-s.top();
               }
              s.push(i);
       }
       
       return ans;
    }
};
