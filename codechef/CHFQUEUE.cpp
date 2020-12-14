// https://www.geeksforgeeks.org/find-the-nearest-smaller-numbers-on-left-side-in-an-array/
//https://www.youtube.com/watch?v=85LWui3FlVk
#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 
#define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<long long int> vi; 
typedef pair<long long int, long long int> pi; 
#define f first 
#define s second 
#define pb push_back   //queue
#define popf pop_front
#define pf push_front  //deque
#define popb pop_back
#define mp make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll n,k;
    cin>>n>>k;
    ll fear=1;
    vi v;
    stack <int> s;
    FOR(i,n)
    {
    	ll a;
    	cin>>a;
        v.pb(a);
    }
    s.push(n-1);
    for(ll i=n-2;i>=0;i--)
    {
        while(!s.empty() && v[i]<=v[s.top()])
        {
        	s.pop();
        }
        if(!s.empty())
        {
        	fear =(fear*(s.top()-i+1))%mod;
        }
        s.push(i);
    }
    cout<<fear;
    
    return 0; 
} 