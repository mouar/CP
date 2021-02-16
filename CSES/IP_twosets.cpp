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
int32_t main()
{
	s_m();
	int n;
	cin >> n;
	// int arr[n + 1];
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		// arr[i] = i;
		sum += i;
	}
	// cout << sum;
	if (sum & 1)
		cout << "NO";
	else
	{
		cout << "YES\n";
		int a = sum / 2;
		int temp = 0;
		int x;
		int end;
		for (int i = n; i >= 1; i--)
		{
			temp += i;
			// cout << temp << " ";

			if ((a - temp) < i)
			{
				x = a - temp;
				end = i;
				break;
			}
		}
		if (x) {
			cout << (n - end + 2) << "\n";
			cout << x << " ";
		}
		else
			cout << (n - end + 1) << "\n";
		for (int i = end; i <= n; i++)
			cout << i << " ";
		cout << "\n";
		if (x)
			cout << end - 2 << "\n";
		else
			cout << end - 1 << "\n";
		for (int i = 1; i < end; i++)
		{
			if (i == x)
				continue;
			else
				cout << i << " ";
		}
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}