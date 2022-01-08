//question link : https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/#

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        int n = 9;
        int row[10][10]={0},col[10][10]={0};
        int box[10][10]={0};

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]!=0 && (row[i][mat[i][j]] || col[j][mat[i][j]] || box[(i/3)*3+j/3][mat[i][j]] ))return false;
                row[i][mat[i][j]]++;
                col[j][mat[i][j]]++;
                box[(i/3)*3+j/3][mat[i][j]]++;
            }
        }
        return true;
    }
};
