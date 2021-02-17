#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long int
#define mod 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define loop(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define looprev(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
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

int dp[20][10][2][2];
int solve(int n, string& s, int x, bool leading_zero, bool tight)
{
	if (n == 0)
		return 1;
	if (x != -1 && dp[n][x][leading_zero][tight] != -1)
		return dp[n][x][leading_zero][tight];
	int ub = (tight) ? s[s.length() - n] - '0' : 9;
	int ans = 0;
	for (int digit = 0; digit <= ub; digit++)
	{
		if (digit == x && leading_zero == 0)
			continue;
		ans += solve(n - 1, s, digit, ((digit == 0) & leading_zero) , (tight & (digit == ub)));
	}
	return dp[n][x][leading_zero][tight] = ans;
}

int32_t main()
{
	s_m();
	int a, b;
	memset(dp, -1, sizeof(dp));
	cin >> a >> b;
	string A = to_string(a - 1);
	string B = to_string(b);
	int ans1 = solve(B.length(), B, -1, 1, 1);
	memset(dp, -1, sizeof(dp));
	int ans2 = solve(A.length(), A, -1, 1, 1);
	cout << ans1 - ans2;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}