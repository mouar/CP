#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)

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
vector<vector<int>> t(1001, vector<int>(100001));

int max_pages(int wt[], int val[], int n, int capacity)
{
	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < capacity + 1; j++)
		{
			if (i == 0 || j == 0)
				t[i][j] = 0;
			else if (wt[i - 1] <= j)
			{
				t[i][j] = max(t[i - 1][j], (val[i - 1] + t[i - 1][j - wt[i - 1]]));
			}
			else
				t[i][j] = t[i - 1][j];
		}
	}
	return t[n][capacity];
}
int32_t main()
{
	s_m();
	int n, capacity;
	cin >> n >> capacity;
	int wt[n];
	int val[n];
	FOR(i, n) cin >> wt[i];
	FOR(i, n) cin >> val[i];
	cout << max_pages(wt, val, n, capacity);
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}