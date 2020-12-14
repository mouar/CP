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
      ll pc,pr;
      cin>>pc>>pr;
      ll c_digit;
      ll r_digit;
      ll c=pc/9;
      ll r=pr/9;
      if(pc%9==0)
        c_digit=c;
      else
        c_digit=c+1;

      if(pr%9==0)
        r_digit=r;
      else
        r_digit=r+1;

      if(c_digit==r_digit)
        cout<<"1 "<<c_digit<<"\n";
      else if(c_digit > r_digit)
        cout<<"1 "<<r_digit<<"\n";
      else
        cout<<"0 "<<c_digit<<"\n";     
    } 
    return 0; 
} 