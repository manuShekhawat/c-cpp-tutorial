// हौसला दिलाएगा मंज़िल  
 
#include<bits/stdc++.h>
 
using namespace std;
#define int long long
const int mod = 998244353;
#define F first
#define S second
#define pb push_back
 
const int N = 2e5+1;
 
 
template<typename... T>
void debug(T&... args){
  cout << "\n==================\n";
  ((cout<< args<<", "), ...);
  cout << "\n==================\n";
}
template<typename T>
void debug(vector<T>& a){
  cout << "\n==============\n";
  for(auto& e:a)cout << e << ' ';
  cout << "\n==============\n";
}
 
template<typename... T>
void put(T&... args) { ((cout << args << " "), ...);}

void solve(){
   int n,m ; cin >> n>> m;

   vector<vector<int>>adj(n);

   for(int i =0 ;i<m ; i++){
     int a,b; cin >> a>> b;a--; b--;
     adj[a].push_back(b); adj[b].push_back(a);
   }
   
   vector<int>parent(n,-1); 
   parent[0] = 0;
   queue<int>q; q.push(0);

   while(q.size()){
     int x = q.front();
      for(auto& e:adj[x]){
        if(parent[e]==-1){
          parent[e] = x; q.push(e);
        }
      }
      q.pop();
   }
   if(parent[n-1]==-1){
     cout << "IMPOSSIBLE\n";return ;
   }
   vector<int>ans;
   int x = n-1;
   while(parent[x]!=x){
     ans.push_back(x); x = parent[x];
   }
   ans.push_back(x);
   reverse(ans.begin() , ans.end());
   cout << ans.size() << '\n';
   for(auto& e:ans)cout << e+1 << ' ';
} 
 
signed main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  // int t; cin>> t; while(t--)
  solve();
}
