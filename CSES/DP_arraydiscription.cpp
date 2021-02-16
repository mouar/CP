#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long int
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1e18
typedef vector<int> vi;
typedef pair<int, int> pi;
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
int32_t main()
{
	s_m();
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	FOR(i, n) cin >> arr[i];
	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n ; i++)
	{
		if (i == 0)
		{
			if (arr[i] == 0)
			{
				for (int j = 1; j <= m; j++)
					dp[j][i] = 1;
			}
			else
				dp[arr[i]][i] = 1;
			continue;
		}
		if (arr[i] != 0)
		{
			dp[arr[i]][i] = dp[arr[i] - 1][i - 1] % mod + dp[arr[i]][i - 1] % mod + ( (arr[i] + 1 <= m) ? dp[arr[i] + 1][i - 1] % mod : 0 );

		}
		else
		{
			for (int j = 1; j <= m; j++)
			{
				dp[j][i] = dp[j][i - 1] % mod;
				dp[j][i] += dp[j - 1][i - 1] % mod;
				if (j < m) dp[j][i] += dp[j + 1][i - 1] % mod;
				dp[j][i] %= mod;
			}
		}

	}
	if (arr[n - 1] != 0)
	{
		cout << dp[arr[n - 1]][n - 1] % mod;
	}
	else
	{
		int res = 0;
		for (int j = 1; j <= m; j++)
			res = (res % mod + dp[j][n - 1] % mod) % mod ;
		cout << res;
	}

	// for (int i = 0; i < m + 1; i++)
	// {
	// 	for (int j = 0; j < n + 1; j++)
	// 		cout << dp[i][j] << " ";
	// 	cout << "\n";
	// }

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}