#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countsetbits(ll n)
{
	ll count=0;
	while(n)
	{
       count += n & 1;
       n >>= 1;
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,q;
		ll even=0,odd=0;
		cin>>n>>q;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(countsetbits(arr[i]) & 1)
				odd++;
			else
				even++;
		}
		
		int a;
		for(int i=0;i<q;i++)
		{
			cin>>a;
			if(countsetbits(a) & 1)
				cout<<odd<<" "<<even<<"\n";
			else
				cout<<even<<" "<<odd<<"\n";
		}
	
	}
}