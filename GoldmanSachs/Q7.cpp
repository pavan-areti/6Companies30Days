//question link : https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/#

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        return ((K-1)+(M-1))%(N)+1;
    }
};
