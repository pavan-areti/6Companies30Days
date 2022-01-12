// question link : https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/



class Solution{
    public:
    vector<string> ansvector;
    void permutestring(vector<string> options,int index,int a[],string ans,int N){
        if(ans.length()==N){
            ansvector.push_back(ans);
            return;
        }
        string temp = options[a[index]];
        int strlength = temp.length();
        for(int i=0;i<strlength;i++){
            permutestring(options,index+1,a,ans+temp[i],N);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> options{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        permutestring(options,0,a,"",N);
        return ansvector;
    }
};
