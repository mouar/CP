#include <bits/stdc++.h> 
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

    ll n,x,y;
    cin>>n>>x>>y;
    pi p[n];
    vi v;
    vi w;
    FOR(i,n)
    {
    	ll s,e;
    	cin>>s>>e;
        p[i]=MP(s,e);
    }
    FOR(i,x)
      {
      	int a;
      	cin>>a;
      	v.PB(a);
      }
    FOR(i,y)
      {
      	int a;
      	cin>>a;
      	w.PB(a);
      }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    ll min=INF;
    ll time;
    //cout<<v[-1]<<" "<<w[3]<<"\n";
    FOR(i,n)
    {
       auto upper=upper_bound(v.begin(), v.end(),p[i].F);
       ll m=(upper-v.begin());
       ll t1=v[(upper-v.begin())-1];
       auto lower=lower_bound(w.begin(), w.end(),p[i].S);
       ll t2=w[lower-w.begin()];
       ll q=lower-w.begin();
       //cout<<m<<" "<<q<<" "<<t1<<" "<<t2<<"\n";
       if(q==w.size() || m==0)
       	continue;
       else
       {
	       time=t2-t1+1;
	       //cout<<time<<"\n";
	       if(time<min)
	         min=time;
       }
    }  
    cout<<min;
    return 0; 
} 