// question link : https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        return (n*(n+1)*(2*n+1))/6;
    }
};
