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
bool is_equal_sum(int arr[], int n, int sum)
{
	bool t[n + 1][sum + 1];
	for (int i = 0; i < sum + 1; ++i)
	{
		t[0][i] = false;
		/* code */
	}
	for (int i = 0; i < n + 1; ++i)
	{
		t[i][0] = true;
		/* code */
	}
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < sum + 1; j++)
		{
			if (arr[i - 1] <= j)
			{
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
			}
			else
				t[i][j] = t[i - 1][j];
		}
	}
	return t[n][sum];

}
int is_subset_sum(int arr[], int n, int sum, int k)
{
	//initialization
// 	int x = min(8001,sum+1);
	bool t[n + 1][sum + 1];
	int ans = -1;
	int total = 0;
	for (int i = 0; i < sum + 1; ++i)
	{
		t[0][i] = false;
		/* code */
	}
	for (int i = 0; i < n + 1; ++i)
	{
		t[i][0] = true;
		/* code */
	}
	bool flag = true;
	int temp = INT_MAX;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < sum + 1; j++)
		{
			if (arr[i - 1] <= j)
			{
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
			}
			else
				t[i][j] = t[i - 1][j];

			if (j >= k && t[i][j] && temp > j)
			{
				temp = j;
				// cout << j << "\n";
				flag = false;
			}
			// cout << t[i][j] << " ";
		}
		// cout << "\n";
		total += arr[i - 1];
		int temp2 = total - temp;
		if (temp2 >= k && !flag)
		{
			ans = i;
			break;
		}
	}
	return ans;
}
int32_t main()
{
	s_m();
	w(t)
	{
		int n, k;
		cin >> n >> k;
		int arr[n];
		int sum = 0;
		FOR(i, n)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		int ans;
		sort(arr, arr + n, greater<int>());
		// FOR(i, n) cout << arr[i] << " ";
		// cout << "\n";

		if (sum < 2 * k)
			ans = -1;
		else if (sum == 2 * k)
		{
			if (is_equal_sum(arr, n, k))
				ans = n;
			else
				ans = -1;
		}
		else
		{
			if (arr[0] >= k && arr[1] >= k)
				ans = 2;
			else if (arr[0] >= k)
			{
				int x = 0;
				for (int i = 1; i < n; i++)
				{
					x += arr[i];
					if (x >= k)
					{
						ans = i + 1;
						break;
					}
				}
			}
			else
				ans = is_subset_sum(arr, n, sum, k);
		}
		cout << ans << "\n";
	}


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}