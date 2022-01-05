// question link :https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    vector<vector<string>> ans;
  int n= string_list.size();
  map<string,vector<string>> m;
  for(int i=0;i<n;i++){
      string str=string_list[i];
      string orig = string_list[i];
      sort(str.begin(),str.end());
      m[str].push_back(orig);
  }
  for(auto &item : m){
      ans.push_back(item.second);
  }
  
    return ans;
}

