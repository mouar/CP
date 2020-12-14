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
int func(ll n)  // no of swaps possible
{
	if(n==1)
		return 0;
	n--;
	return (n*(n+1))/2;
	
}
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll t; 
    cin >> t; 
    while (t--) { 
        ll n;
        cin>>n;
        ll sum= n*(n+1);
        sum=sum/2;
        ll count=0;
        if(sum % 2 ==0)
        {
        	sum=sum/2;
	        ll temp=0;
	        for(ll i=n;i>=1;i--)
	        {
	        	if(temp<sum)
	        	{
	        		count++;
	              temp=temp+i;
	        	}
	        	else if(temp==sum)
	        	{
                    count += func(count) + func(n-count) +1;
                    break;
	        	}
	        	else
	        	{
	        		//temp=temp-(i-1);
	        		break;
	        	}
	        } 
        }
        cout<<count<<"\n";
    } 
    return 0; 
} 