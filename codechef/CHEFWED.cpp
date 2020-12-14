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
    int t; 
    cin >> t; 
    while (t--)
    { 
        int n,k;
        cin>>n>>k;
        int cost=0;
        if(k==1)
        {
            int arr[n];
            FOR(i,n) cin>>arr[i];
            map<int, int> m2;
            cost=k;
            FOR(i,n)
            {
                if(m2[arr[i]]==0)
                {
                    m2[arr[i]]++;
                }
                else
               {
                   cost +=k;
                   m2.clear();
                   m2[arr[i]]++;
               }
            }
        }
        else{
            map<int, int> m;
            FOR(i,n)
            {
            	int a;
            	cin>>a;
            	m[a]++;
            }
            for(auto it=m.begin();it!=m.end();it++)
            {
               if(it->S == 1)
                  m.erase(it);
            }
            for(auto it=m.begin();it!=m.end();it++)
            {
            	//cout<<it->F<<" "<<it->S<<"\n";
                if(it->S > 1)
                	cost += it->S;
            }
            cost = cost +k;
            //cout<<"cost: "<<cost<<"\n";
            while(true)
            {
            	ll count=0;
                ll temp=0;
    	        for(auto it=m.begin();it!=m.end();it++)
    	        {
    	        	//cout<<it->F<<" "<<it->S<<"\n";
    	        	int a=it->F;
    	        	int b=it->S;
    	            if(b > 1)
    	            {
    		              if(b == 2)
    		              {
    		              	count++;
    		              }
    		              count++;
    		              m[a]--;
    	            }
    	            
    	        }
                temp=cost+k-count;
                if(temp <= cost)
                	cost=temp;
                else
                	break;
            }
        }
        cout<<cost<<"\n";
    } 
    return 0; 
} */

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
int dp[1002];
/*int argument(int *arr,int j,int i)
{
	
	for(int k=j;k<=i;k++)
	{
		m[arr[j]]++;
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		if(it->S > 1)
			count += it->S;
	}
	return count;
}*/
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t; 
    cin >> t; 
    assert(t>=1 && t<=100);
    while (t--) 
    { 
         int k,n;
         cin>>n>>k;
         assert(n>=1 && n<=1000);
         assert(k>=1 && k<=1000);
         int arr[n+1];
         for(int i=1;i<=n;i++)
         {
         	cin>>arr[i];
         	assert(arr[i]>=1 && arr[i]<=100);
         }
         dp[0]=0;
         dp[1]=k;
         for(int i=2;i<=n;i++)
         {
         	dp[i]=dp[i-1]+k;
         	int count=0;
        	map<int,int> m;
         	for(int j=i;j>=1;j--)
         	{
         		m[arr[j]]++;
         		if (m[arr[j]] == 2)
                    count += 2;
                else if (m[arr[j]] > 2)
                    count += 1;
                dp[i]=min(dp[i],dp[j-1]+k+count);
         	}
/*         	if(dp[i] <= (k+argument(arr,1,i)))
               dp[i] = k+argument(arr,1,i);*/
         }
         cout<<dp[n]<<"\n";
    } 
    return 0; 
} 