// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// using namespace std;

// #define int long long int
// #define max(a, b) (a < b ? b : a)
// #define min(a, b) ((a > b) ? b : a)
// #define mod 1000000007
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
// #define INF 1e18
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define setbits(x)      __builtin_popcountll(x)
// #define zerobits(x)     __builtin_ctzll(x)          //no of zero's before the first 1 from the right
// #define ps(x,y)         fixed<<setprecision(y)<<x
// #define w(x)            int x; cin>>x; while(x--)
// #define F first
// #define S second
// #define PB push_back   //queue
// #define POPF pop_front
// #define PF push_front  //deque
// #define POPB pop_back
// #define MP make_pair
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count()); //random shuffler
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //Policy based data structure

// void s_m()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("error.txt", "w", stderr);
// 	freopen("output.txt", "w", stdout);
// #endif
// }
// //if order does not matter means distinct no of ways
// int max_ways(int coins[], int n, int sum)
// {
// 	vector<vector<int>> t(n + 1, vector<int>(sum + 1));
// 	for (int i = 0; i < sum + 1; i++) {
// 		t[0][i] = 0;
// 	}
// 	for (int j = 0; j < n + 1; j++)
// 		t[j][0] = 1;

// 	for (int i = 1; i < n + 1; i++)
// 	{
// 		for (int j = 1; j < sum + 1; j++)
// 		{
// 			if (coins[i - 1] <= j)
// 				t[i][j] = ((t[i - 1][j]) % mod + (t[i][j - coins[i - 1]]) % mod) % mod;
// 			else
// 				t[i][j] = t[i - 1][j] % mod;
// 		}
// 	}
// 	return t[n][sum];
// }
// int32_t main()
// {
// 	s_m();
// 	int n, sum;
// 	cin >> n >> sum;
// 	int coins[n];
// 	FOR(i, n) cin >> coins[i];
// 	cout << max_ways(coins, n, sum);
// 	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
// 	return 0;
// }

// code bada hai isliye runtime error aa raha hai

#include <bits/stdc++.h>
using namespace std;


int max_ways(int coins[], int n, int sum)
{
	int mod = 1e9 + 7;
	vector<vector<int>> t(n + 1, vector<int>(sum + 1));
	for (int i = 0; i < sum + 1; i++) {
		t[0][i] = 0;
	}
	for (int j = 0; j < n + 1; j++)
		t[j][0] = 1;

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < sum + 1; j++)
		{
			if (coins[i - 1] <= j)
				t[i][j] = ((t[i - 1][j]) % mod + (t[i][j - coins[i - 1]]) % mod) % mod;
			else
				t[i][j] = t[i - 1][j] % mod;
		}
	}
	return t[n][sum];
}
int main() {

	int n, sum;
	cin >> n >> sum;
	int coins[n];
	for (int i = 0; i < n; i++)
		cin >> coins[i];
	cout << max_ways(coins, n, sum);
}