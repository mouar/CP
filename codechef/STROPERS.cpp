#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long int
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--)
#define INF 1e18
typedef vector<int> vi;
typedef pair<int, int> pi;
#define mii             map<long long int,long long int>
#define pqb             priority_queue<long long int>
#define pqs             priority_queue<long long int,vi,greater<long long int> >
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
int32_t main()
{
    s_m();
    w(t)
    {
        string s;
        cin >> s;
        set<tuple<int, int, int> >eq;
        int n = s.length();
        int cnt;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0, even = 0, odd = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == '1')
                    cnt++;
                else
                {
                    if (cnt % 2)
                        odd++;
                    else
                        even++;
                }
                int len = j - i + 1;
                eq.insert({len, even, odd});
            }
        }
        cout << eq.size() << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
// https://www.youtube.com/watch?v=kAYlIjvFTws (solution)