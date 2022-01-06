//problem link : https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/#


class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<k-1;i++){
            q.push({arr[i],i});
        }
        vector<int> ans;
        for(int i=k-1;i<n;i++){
            q.push({arr[i],i});
            while(q.top().second<=(i-k)){
                q.pop();
            }
            ans.push_back(q.top().first);
        }
        return ans;
    }
};
