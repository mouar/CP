#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
// https://www.youtube.com/watch?v=heUFId6Qd1A
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
//   dp[len][sum][tight]
int dp[100][100][2];
int digit_dp(int n, string& s, int sum, bool tight)
{
	if (sum < 0) return 0;
	if (n == 1)
	{
		if (sum >= 0 && sum <= 9)
			return 1;
		else
			return 0;
	}

	if (dp[n][sum][tight] != -1)
		return dp[n][sum][tight];
	int ans = 0;
	int ub = (tight) ? (s[s.length() - n] - '0') : 9 ; //upper bound
	for (int i = 0; i <= ub; i++)
	{
		ans += digit_dp(n - 1, s, sum - i, (i == ub) & tight);
	}
	return dp[n][sum][tight] = ans;

}
int32_t main()
{
	s_m();
	memset(dp, -1, sizeof(dp));
	int a;
	cin >> a;  // a = 5321
	int sum;
	cin >> sum;
	string s = to_string(a);
	cout << digit_dp(s.length(), s, sum, 1); // tight condition(1) because we could not consider the no whose 1st digit greater than 5(for above example)
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}