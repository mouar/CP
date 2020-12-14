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
         int n;
         cin>>n;
         int arr[n+1][n+1];
         int count=0;
         for(int i=1;i<=n;i++)
         {
         	for(int j=1;j<=n;j++)
         	{
         		cin>>arr[i][j];
         	}
         }
         for(int i=n;i>=1;i--)
         {
         	if(arr[i][1]==(i-1)*n + 1)
         		continue;
         	else
         	{
         		for(int k=1;k<=i;k++)
         		{
         			for(int j=k+1;j<=i;j++)
         			{
                        swap(arr[k][j],arr[j][k]);
         			}
         		}
                count++;
         	}
         }
         cout<<count<<"\n";

    } 
    return 0; 
} 