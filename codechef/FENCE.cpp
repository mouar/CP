#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<long long int> vi; 
typedef pair<long long int, long long int> pi; 
#define F first 
#define S second 
#define PB push_back   //queue
#define POPF pop_front
#define PF push_front  //deque
#define POPB pop_back
#define MP make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t; 
    cin >> t; 
    while (t--) 
    { 
      int n,m,k;
      cin>>n>>m>>k;
      set<pi> s;
      FOR(i,k)
      {
      	int a,b;
      	cin>>a>>b;
      	s.insert({a,b});
      }
      int fence=0;
      for(auto it=s.begin();it!=s.end();it++)
      {
      	fence+=4;
      	ll x=it->F;
      	ll y=it->S;
        if(s.find({x-1,y})!=s.end())
        	fence -=1;
        if(s.find({x+1,y})!=s.end())
        	fence -=1;
        if(s.find({x,y-1})!=s.end())
        	fence -=1;
        if(s.find({x,y+1})!=s.end())
        	fence -=1;
      }
      cout<<fence<<"\n";
    } 
    return 0; 
} 