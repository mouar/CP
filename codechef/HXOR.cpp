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


int msb(int n) 
{ 
    n |= n >> 1; 
    n |= n >> 2; 
  
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16;

    n = n + 1; 
    return (n >> 1); 
} 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t; 
    cin >> t; 
    while (t--) 
    { 
         int n,x;
         cin>>n>>x;
         int arr[n];
         int abc=0;
         bool check=false;
         FOR(i,n) 
         {
            cin>>arr[i];
         }
        vector<vector<int>> vect;
        int z=x;
        int i=0;
        int j=0;
        int count=0;
        while(x--)
        {
            abc=0;
            
            if(i<n && j<n)
            {
                int p=msb(arr[i]);
                arr[i] = arr[i]^p;
                for(int a=j;a<n;a++)
                {
                    if((arr[a]^p)<(arr[a]))
                    {
                        arr[a] = arr[a]^p;
                        if(arr[a]==0)
                        {
                            if(a==j)
                               {
                                   if(arr[i]!=0)
                                       abc++;
                               }
                            else
                            {
                                abc++;
                            }
                        }
                        break;
                    }
                    else if(a == n-1)
                        arr[a] = arr[a]^p;
                }
                while(arr[i] == 0)
                {
                    i++;
                }
                count++;
                j=i+1;
                if(abc>0)
                    check=true;
                
            }
            else
            {
                break;
            }

        }
        if(x+1 != 0)
        {
            if(!check)
            {
               if(count%2 == 0)
               {
               if(z%2 != 0)
                 {
                    arr[n-1] ^= 1;
                    arr[n-2] ^= 1;
                 }
               }
               else
               {  
                if(z%2 == 0)
                 {
                    arr[n-1] ^= 1;
                    arr[n-2] ^= 1;
                 }
               }
            }
            
            
        } 
         FOR(i,n) cout<<arr[i]<<" ";
         cout<<"\n";
    } 
    return 0; 
} 