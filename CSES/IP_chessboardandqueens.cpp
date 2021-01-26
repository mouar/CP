#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long int
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
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
bool isSafe(char** arr, int x, int y, int n)
{
	//
	for (int row = 0; row < x; row++)
	{
		if (arr[row][y] == 'q')
			return false;
	}
	//left diagonal
	int row = x;
	int col = y;
	while (row >= 0 && col >= 0)
	{
		if (arr[row][col] == 'q')
			return false;
		row--;
		col--;
	}

	row = x;
	col = y;
	while (row >= 0 && col < n)
	{
		if (arr[row][col] == 'q')
			return false;
		row--;
		col++;
	}

	return true;

}

bool n_queen(char** arr, int x, int n, int &ans)
{
	if (x == n)
	{
		ans++;
		return true;
	}
	bool res = false;
	for (int col = 0; col < n; col++)
	{
		if (arr[x][col] == '.' && isSafe(arr, x, col, n))
		{
			arr[x][col] = 'q';
			res = n_queen(arr, x + 1, n, ans) || res;
			arr[x][col] = '.';
		}
	}
	return res;
}
int32_t main()
{
	s_m();
	char** arr = new char*[8];
	for (int i = 0; i < 8; i++)
	{
		arr[i] = new char[8];
		for (int j = 0; j < 8; j++)
		{
			cin >> arr[i][j];
		}
	}
	int ans = 0 ;
	if (n_queen(arr, 0, 8, ans))
		cout << ans;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}