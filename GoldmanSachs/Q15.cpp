//question link : https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#


class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> m;
        m[nums[0]%k]= 1;
        int n = nums.size();
        if(n&1)return 0;
        int ans = 0;
        for(int i=1;i<n;i++){
            int rem = (nums[i]%k==0)?0:k-nums[i]%k;
            if(m[rem]){
                m[rem]--;
                ans+=2;
            }
            else m[nums[i]%k]++;
        }
        return ans==n;
    }
};
