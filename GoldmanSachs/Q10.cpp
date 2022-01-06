typedef long long int lli;
int main(){
  lli n;
  cin>>n;
  priority_queue<lli,vector<lli>,greater<lli>> pq;
  for(int i=0;i<n;i++){
    lli x;
    cin>>x;
    pq.push(x);
    if(pq.size()>10){
      pq.pop();
    }
  }
  while(!pq.empty()){
    cout<<pq.top();
    pq.pop();
  }
}
