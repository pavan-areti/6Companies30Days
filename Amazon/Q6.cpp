//problem link : https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        int t = (min(k,n));
        for(int i=0;i<t;i++)pq.push(make_pair(arr[i],i));
        
        ans.push_back(pq.top().first);
        
        if(k>=n)return ans;
        
        for(int i=k;i<n;i++){
            pq.push(make_pair(arr[i],i));
            
            while(pq.top().second < i-k+1){
                pq.pop();
            }
            
            ans.push_back(pq.top().first);
        }
        
        return ans;
    }
};
