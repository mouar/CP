//https://www.youtube.com/watch?v=7Q2Nlf-fT4o&t=2180s
#include<bits/stdc++.h> 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define int long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef vector<int> vi; 
typedef pair<int,int> pi; 
#define F first 
#define S second 
#define PB push_back   //queue
#define POPF pop_front
#define PF push_front  //deque
#define POPB pop_back
#define MP make_pair 
int32_t main() 
{ 
	    ios::sync_with_stdio(0); 
	    cin.tie(0); 
        int n; 
        cin >> n; 
        pi arr[n];
        FOR(i,n) cin>>arr[i].first>>arr[i].second;
        stack <pi> s;
        int rb[n],lb[n];
        sort(arr,arr+n);
       FOR(i,n)
       {
       	  while(!s.empty() && s.top().F>arr[i].S)
       	  {
              rb[s.top().S]=arr[i].F;
              s.pop();
       	  }
       	  s.push(MP(arr[i].S,i));
       }
       while(!s.empty())
       {
       	 rb[s.top().S]=100000;
         s.pop();
       }
       for(int i=n-1;i>=0;i--)
       {
       	  while(!s.empty() && s.top().F>arr[i].S)
       	  {
              lb[s.top().S]=arr[i].F;
              s.pop();
       	  }
       	  s.push(MP(arr[i].S,i));
       }
       while(!s.empty())
       {
       	 lb[s.top().S]=0;
         s.pop();
       }
       int ans=0;
       FOR(i,n)
       {
       //	cout<<lb[i]<<" "<<rb[i]<<"\n";
       	int height =arr[i].S;
       	int base =rb[i]-lb[i];
      	ans = max(ans,height*base);
       }
       ans =max(ans, 500*arr[0].F);
       ans =max(ans,500*(100000-arr[n-1].F));
       FOR(i,n-1)
       {
       	  int base=arr[i+1].F-arr[i].F;
       	  ans=max(ans,500*base);
       }
       cout<<ans;
       return 0;
} 