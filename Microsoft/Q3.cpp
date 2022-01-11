// question link : https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/#


void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    int i=0,j=n-1;
    
    while(i<j){
        swap(matrix[i],matrix[j]);
        i++;j--;
    }
    
}
