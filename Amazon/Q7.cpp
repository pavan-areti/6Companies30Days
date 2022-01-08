// question lik : https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<int> q;
		    vector<int> arr(26,0);
		    int n = A.size();
		    string ans="";
		    for(int i=0;i<n;i++){
		        q.push(A[i]-'a');
		        arr[A[i]-'a']++;
		        while(!q.empty() && arr[q.front()]!=1)q.pop();
		        
		        if(!q.empty())ans+= ('a'+q.front());
		        else ans+="#";
		    }
		    return ans;
		}

};
