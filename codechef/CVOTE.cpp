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
    int n,m;
    cin>>n>>m;
    map<string,string> m1;
    FOR(i,n)
    {
    	string chef;
    	string country;
    	cin>>chef>>country;
    	m1.insert({chef,country});
    }
    map<string,int> chef_vote;
    map<string,int> country_vote;
    FOR(i,m)
    {
    	string name;
    	cin>>name;
        chef_vote[name]++;
        country_vote[m1[name]]++;
    }
    /*for(auto it=chef_vote.begin();it!=chef_vote.end();it++)
    {
    	cout<<it->F<<" "<<it->S<<"\n";
    }
    for(auto it=country_vote.begin();it!=country_vote.end();it++)
    {
    	cout<<it->F<<" "<<it->S<<"\n";
    }*/
    int max=0;
    auto it1=country_vote.begin();
    for(auto it=country_vote.begin();it!=country_vote.end();it++)
    {
    	int temp=it->S;
    	if(temp>max)
    	{
            it1=it;
    		max=temp;
    	}
    	else if(temp==max)
    	{
           string a=it->F;
           string b=it1->F;
           if(a.compare(b)<0)
           	  it1=it;
    	}
    }
    auto it2=chef_vote.begin();
    int max2=0;
    for(auto it=chef_vote.begin();it!=chef_vote.end();it++)
    {
    	int temp=it->S;
    	if(temp>max2)
    	{
            it2=it;
    		max2=temp;
    	}
    	else if(temp==max)
    	{
           string a=it->F;
           string b=it2->F;
           if(a.compare(b)<0)
           	  it2=it;
    	}
    }
    cout<<it1->F<<"\n"<<it2->F;

    return 0; 
} 