#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
		    v.push_back(a);
		}
		int size=0;
		for(auto i=v.begin();i!=v.end();i++)
		{
			//cout<<*(i+1)<<" ";
			//cout<<*i;

			size += *min_element(v.begin(),i+1);
			//cout<<*min_element(v.begin(),i+1)<<" ";
		}
		cout<<size<<"\n";
	}
}