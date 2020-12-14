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
         ll n,k;
         cin>>n>>k;
         vi vect;
         FOR(i,n) 
         {   
             int a;
             cin>>a;
             vect.push_back(a);
         }
         sort(vect.begin(), vect.end());
         auto it=lower_bound(vect.begin(), vect.end(),k);
         if(it==vect.begin())
         {
               cout<<"-1\n";
         }
         else
         {
             it--;
             //cout<<*it<<"\n";
             auto it2=vect.begin();
             it2--;
             auto it3=vect.begin();
             //int count=0;
             bool flag=false;
             for(auto it1=it;it1!=it2;it1--)
             {
                 //count++;
             	if(k%(*it1)==0)
             	{
             		it3=it1;
             		flag=true;
             		break;
             	}
             	
             }
             //cout<<count<<"\n";
             if(flag)
                cout<<*it3<<"\n";
             else
             	cout<<"-1\n";
         }
    } 
    return 0; 
} 