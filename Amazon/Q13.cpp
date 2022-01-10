// question link : https://leetcode.com/problems/rotting-oranges/submissions/


class Solution {
public:
    bool isok(vector<vector<int>>& grid,int x,int y,int n,int m){
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y]!=1)return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt=0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        int time=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    cnt++;
                }
                else if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        if(cnt==0)return 0;
        int x[4] = {0,0,-1,1};
        int y[4] = {1,-1,0,0};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto top = q.front();
                q.pop();
                int f = top.first;
                int s = top.second;
                for(int i=0;i<4;i++){
                    if(isok(grid,f+x[i],s+y[i],n,m)){
                        grid[f+x[i]][s+y[i]]=2;
                        q.push({f+x[i],s+y[i]});
                        cnt--;
                    }
                }
                if(cnt==0)break;
            }
            if(cnt==0){
                return time;
            }
            time++;
        }
        
        return -1;
    }
};
