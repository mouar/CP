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
int min_no_of_moves(string a, string b)
{
	int n = a.length();
	int m = b.length();
	vector<vector<int>> t(n + 1, vector<int>(m + 1));
	t[0][0] = 0;
	loop(i, 1, n)
	{
		t[i][0] = i;
	}
	loop(i, 1, m)
	{
		t[0][i] = i;
	}
	for (int i = 1; i < n + 1; i++)
	{
		loop(j, 1, m)
		{
			if (a[i - 1] == b[j - 1])
				t[i][j] = t[i - 1][j - 1];
			else
				t[i][j] = 1 + min(t[i - 1][j - 1], min(t[i][j - 1], t[i - 1][j]));
			//                      replace          add            erase
		}
	}
	// loop(i, 0, n)
	// {
	// 	loop(j, 0, m)
	// 	cout << t[i][j] << " ";
	// 	cout << "\n";
	// }
	return t[n][m];
}
int32_t main()
{
	s_m();
	string a, b;
	cin >> a >> b;
	int x = min_no_of_moves(a, b);
	cout << x;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}