/*#include "bits/stdc++.h" 
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
    ll t; 
    cin >> t; 
    while (t--) 
    { 
         ll n;
         cin>>n;
         map<ll, ll> m;
         ll arr[n+1];
         FOR(i,n)
         {
         	ll a;
         	cin>>a;
         	m[a]++;
         }
         for(ll i=1;i<n+1;i++)
         {
         	arr[i]=m[i];
         }
         map<ll, ll> sum;
         auto it1=m.rbegin();
         ll s=it1->S;
         ll j=it1->F;
         sum[j]=0;
         it1++;
         for(auto it=it1;it!=m.rend();it++)
         {
         	 ll i=it->F;
             ll temp=it->S;
             sum[i]=s;
             s += temp;    
         }
         for(int i=1;i<n+1;i++) cout<<"arr["<<i<<"]"<<arr[i]<<" ";
         	cout<<"m[] ==>\n";
         for(auto it=m.begin();it!=m.end();it++)
         {
         	cout<<it->F<<" "<<it->S<<"\n";
         }
         cout<<"sum[] ==>\n";
         for(auto it=sum.begin();it!=sum.end();it++)
         {
         	cout<<it->F<<" "<<it->S<<"\n";
         }
         for(int i=1;i<n+1;i++)
         { 
         	cout<<"m["<<i<<"]"<<m[i]<<" ";
         	cout<<"sum["<<i<<"]"<<sum[i]<<" \n";
         }
         for(ll i=1;i<n+1;i++)
         {
         	if(m[i]!=0)
         	{
         		cout<<"m["<<i<<"]"<<m[i]<<"\n";
         		ll a=pow(2,m[i])-1;
         		ll b=pow(2,sum[i])-1;
         		cout<<a<<"  "<<b<<" \n";
         	    m[i] =a + a * b;
         	}
         }
         for(ll i=1;i<n+1;i++)
         {
         	cout<<m[i]<<" ";
         }
         cout<<"\n";
    } 
    return 0; 
} */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000 * 1000 * 1000 + 7 
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
#define limit 500001
ll fact[limit];
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t; 
    cin >> t; 
    while (t--) 
    { 
         ll n,k;
         cin>>n>>k;
         ll arr[n];
         map<ll,ll> m;
         FOR(i,n)
         {
         	cin>>arr[i];
         	m[arr[i]]++;
         }

		 fact[0]=1;
		 fact[1]=1;
	   	 for(ll i=2;i<=limit;i++)
	   	 {
	   	 	fact[i]=(fact[i-1]*i)%mod;
	   	 }

    } 
    return 0; 
} 