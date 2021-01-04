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
	w(t)
	{
		int n, m;
		cin >> n >> m;
		int john[n];
		int jack[m];
		int john_sum = 0;
		int jack_sum = 0;
		bool f1 = true, f2 = true;
		for (int i = 0; i < n; i++)
		{

			cin >> john[i];
			john_sum += john[i];
			if (i > 0 && john[i] != john[i - 1])
				f1 = false;
		}
		FOR(i, m) {
			cin >> jack[i];
			jack_sum += jack[i];
			if (i > 0 && john[i] != john[i - 1])
				f2 = false;
		}
		int ans;
		sort(john, john + n);
		sort(jack, jack + m);
		if (john_sum > jack_sum)
			ans = 0;
		else if (john_sum == jack_sum)
		{
			if (john[0] < jack[m - 1])
				ans = 1;
			else
				ans = -1;
		}
		else
		{
			int count = 0;
			int i = 0;
			int j = m - 1;
			while (jack_sum => john_sum)
			{
				if (i == n || j == -1)
				{
					count = -1;
					break;
				}
				//cout << jack_sum << " " << john_sum << "\n" << i << " " << j << "\n";
				if (jack[j] > john[i])
				{
					int temp = jack[j] - john[i];
					jack_sum -= temp;
					john_sum += temp;
					i++;
					j--;
					count++;
				}
				else
				{
					count = -1;
					break;
				}

			}
			ans = count;

		}
		cout << ans << "\n";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}