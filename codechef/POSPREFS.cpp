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
    // ios::sync_with_stdio(0); 
    // cin.tie(0); 
    int t; 
    cin >> t; 
    while (t--) 
    { 
         int n,k;
         cin>>n>>k;
         int arr[n+1];
         for(int i=1;i<=n;i++)
         {
         	if(i & 1) //odd
               arr[i] = -i;
            else
         	   arr[i] = i;
         }
         int temp = n/2;
         if(temp == k)
         	{

         	}
         else if(temp > k)
         {
         	int c = k*2;
         	for(int i=c+1;i<=n;i++)
         	{
               if(arr[i] > 0)
               	 arr[i] = -arr[i];
         	}
         }
         else
         {
            int c = (n-k) * 2;
            for(int i=c+1;i<=n;i++)
            {
            	if(arr[i] < 0)
            		arr[i] = -arr[i];
            }
         }
         for(int i=1;i<=n;i++)
         {
         	cout<<arr[i]<<" ";
         }
         cout<<"\n";
    }
    return 0; 
} 