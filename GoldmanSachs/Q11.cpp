// problem link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#

typedef long long int lli;
class Solution{
public:
    vector<lli> findTwoElement(int arr[], int l) {
        lli n = l;
        lli sum = (lli)(n*(n+1))/2;
        lli sqsum = (lli)(n*(n+1)*(2*n+1))/6;

        for(lli i=0;i<n;i++){
            sum -= (lli)arr[i];
            sqsum -= ((lli)arr[i]*(lli)arr[i]);
        }

        lli rn = ((sqsum/sum)+sum)/2;
        lli ms = rn-sum;
        return vector<lli>{ms,rn};
    }
};
