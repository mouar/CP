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
       string s;
       string p;
       cin>>s;
       cin>>p;
       string result="";
       sort(s.begin(), s.end());
       if(s.length()==p.length() || s.length()==1)
       {
           cout<<p<<"\n";
       }
       else if(p.length()==1)
           cout<<s<<"\n";
       else
       {
           for(ll i=0;i<p.length();i++)
           {
           	  ll index=s.find_first_of(p[i]);
              s.erase(s.begin()+index);
           }
           string r1="";
           string r2="";
           for(ll i=0;i<s.length();i++)
           {
           	  if(r1=="" && s[i]==p[0])
           	  {
           	  	string s1=s.substr(0,i);
           	  	string s2=s.substr(i,s.length());
           	  	r1=s1+p+s2;
           	  }
           	  if(r1!="")
           	  {
           	  	//cout<<"test";
	           	  if(i==s.length()-1)
	              	{
	              		r2=s+p;
	              	}
	           	  if(s[i]==p[0])
	           	  	continue;
	           	  if(s[i]>p[0])
	           	  {
	           	  	string p1=s.substr(0,i);
	           	  	string p2=s.substr(i,s.length());
	           	  	r2=p1+p+p2;
	           	  	break;
	           	  }
           	  }
           	  if(s[i]>p[0])
           	  {
           	  	string s1=s.substr(0,i);
           	  	string s2=s.substr(i,s.length());
           	  	result=s1+p+s2;
           	  	break;
           	  }
           }
           //cout<<"r1 :"<<r1<<"| r2 :"<<r2<<"\n";
           if(r1!="" && r2!="")
           	  {
           	  	if(r1 > r2)
           	  		result=r2;
           	  	else
           	  		result=r1;
           	  }
           if(result=="")
           	 result=s+p;
           cout<<result<<"\n";
       }
    } 
    return 0; 
}