#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

// #define int long long int
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7 
#define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--) 
#define INF 1e18 
typedef vector<int> vi; 
typedef pair<int,int> pi;
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)          //no of zero's before the first 1 from the right
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define F first 
#define S second 
#define PB push_back   //queue
#define POPF pop_front
#define PF push_front  //deque
#define POPB pop_back
#define MP make_pair
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count()); //random shuffler
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //Policy based data structure

void s_m() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
#endif 
} 
int no_of_1(string s)
{
  int n=s.length();
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(s.at(i)=='1')
      count++;
  }
  return count;
}
int32_t main() 
{ 
    s_m();
    w(t)
    {
        int n;
        string str;
        cin>>str;
        n=str.length();
        int count=3;
        if(stoi(str)==0)
            count=2;
        for(int i=2;i<=n-1;i++)
        {
            //int k=i-1;
            set<string> s;
            int j=0;
            while(j+i-1< n)
            {
                string a=(str.substr(j,i));
                j++;
                s.insert(a);
            }
            // for(auto it=s.begin();it!=s.end();it++)
            //     cout<<*it<<" ";
            // cout<<"\n";
            while(!s.empty())
            {
                auto itr=s.begin();
                string s1=*itr;
                std::map<string, int> map1;
                auto it1=s.begin();
                it1++;
                for(auto it=it1;it!=s.end();it++)
                {
                    bool equal=false;
                    if(no_of_1(*it) == no_of_1(*itr))
                    {
                       string s2=*it;
                       int m=0;
                       int l=s1.length()-1;
                       while(m<s1.length() && l>=0)
                       {
                          int abc=0;
                          if(s1.at(m)==s2.at(m))
                          {
                              m++;
                              abc=1;
                          }
                          if(s1.at(l)==s2.at(l))
                          {
                            l--;
                            abc=1;
                          }
                          if(abc==0)
                             break;
                       }
                       if(no_of_1(s1.substr(m,l-m+1))%2 == 0)
                       {
                          int q=l;
                          for(int p=m;p<=l;p++)
                          {
                            if(s1.at(p)==s2.at(q))
                            {
                                if(p==l)
                                    equal=true;
                            }
                            else
                                break;
                            q--;
                          }
                        }
                    
                    }

                    if(equal)
                        map1[*it]=1;
                 
                }
                for(auto& it:map1)
                {
                    if(it.S == 1)
                       s.erase(it.F);
                }
                map1.clear();
                s.erase(s.begin());
                count++;
            } //while
            s.clear();
        }
        cout<<count<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
} 