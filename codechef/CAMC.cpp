#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int min=INT_MAX;
		int n,m;
		cin>>n>>m;
		unsigned long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
		{
			int j=i+1;
			while(j<n)
			{
                if(j==i+m)
                	j++;
                else
                {
                	if(a[i]-a[j]<min)
                		min=a[i]-a[j];
                	/*if(min<0)
                		min=-min;*/
                	j++;
                }

			}
		}
		cout<<min<<"\n";
	}
}