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
       ll n;
       cin>>n;
       map<ll,ll> m;
       int count=0;
       FOR(i,n) 
       {
       	ll a;
       	cin>>a;
       	m[a]++;
       }
       //cout<<m[0]<<"\n";
       auto it1 =m.find(0);
       if(it1 == m.end()){
       	count=m.size();
       }
       else{
       	//cout<<"m[0]"<<m[0]<<"  m.size()"<<m.size()<<"\n";
       	count=m.size()-1;
       }
       // for(auto it=m.begin();it!=m.end();it++)
       // {
       // 	cout<<it->F<<"  "<<it->S<<"\n";
       // }
       // cout<<m.size();
       cout<<count<<"\n";
    } 
    return 0; 
} 