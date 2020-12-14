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
    float d1,v1,d2,v2,n;
    cin>>d1>>v1>>d2>>v2>>n;
    int count=0;
    int temp=-1;
    if(d1<=d2)
    {
    	count +=(d1-1);
        temp = d2 - d1;
    }
    else
    {
    	count +=(d2-1);
    	temp = d1 - d2;
    }
    //cout<<count<<"\n";
    if(temp == 0)
    {
    	//cout<<n<<v1+v2;
        count += ceil(n/(v1 + v2));
    }
    else
    {
        for(int i=0;i<temp;i++)
        {
        	if(d1>d2)
        		n -= v2;
        	else
        		n -= v1;
            count++;
        	if(n<=0)
        	  break;
        }
        //cout<<"count: "<<count<<"vaccine "<<n<<"\n";
        if(n>0)
        {
        	count += ceil(n / (v1+v2) );
        }
    }
    cout<<count<<"\n";

    return 0; 
} 