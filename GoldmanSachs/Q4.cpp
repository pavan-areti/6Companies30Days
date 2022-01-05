// question link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#

string encode(string src)
{     
  char prev = src[0];
  string ans="";
  int cnt =1;
  for(int i=1;i<src.size();i++){
      if(src[i-1]==src[i]){
          cnt++;
          continue;
      }
      else{
          ans += prev;
          ans += to_string(cnt);
          cnt=1;
          prev = src[i];
      }
  }

          ans += prev;
          ans += to_string(cnt);
          cnt=1; 
  return ans;
}     
 
