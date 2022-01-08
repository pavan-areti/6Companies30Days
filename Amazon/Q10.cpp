//question link : https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    map<int,int> m;
	    int i=0;
	    for(int i=0;i<n;i++){
	        m[nuts[i]]++;
	    }
	    if(m['!']!=0){
	        nuts[i]='!';
	        bolts[i]='!';
	        i++;
	    }
	    if(m['#']!=0){
	         nuts[i]='#';
	        bolts[i]='#';
	        i++;
	    }
	    if(m['$']!=0){
	         nuts[i]='$';
	        bolts[i]='$';
	        i++;
	    }
	    if(m['%']!=0){
	         nuts[i]='%';
	        bolts[i]='%';
	        i++;
	    }
	    if(m['&']!=0){
	         nuts[i]='&';
	        bolts[i]='&';
	        i++;
	    }
	    if(m['*']!=0){
	         nuts[i]='*';
	        bolts[i]='*';
	        i++;
	    }
	    if(m['@']!=0){
	         nuts[i]='@';
	        bolts[i]='@';
	        i++;
	    }
	    if(m['^']!=0){
	         nuts[i]='^';
	        bolts[i]='^';
	        i++;
	    }
	    if(m['~']!=0){
	         nuts[i]='~';
	        bolts[i]='~';
	        i++;
	    }
	}

};
