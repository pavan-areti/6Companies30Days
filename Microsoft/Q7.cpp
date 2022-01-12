// question link : https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/#


class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void dfs(vector<vector<int>>& grid,int i,int j,int &ans,int &l,int x[],int y[],int n,int m){
        grid[i][j] = 0;
        l++;
        ans = max(ans,l);
        for(int k=0;k<8;k++){
            int r = i+x[k];
            int c = j+y[k];
            
            if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1){
                dfs(grid,r,c,ans,l,x,y,n,m);
            }
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        
        int x[8] = {0,0,1,-1,1,-1,-1,1};
        int y[8] = {1,-1,0,0,1,1,-1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int l = 0;
                    dfs(grid,i,j,ans,l,x,y,n,m);
                }
            }
        }
        
        return ans;
    }
};
