#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int sum=0;
		int n;
		cin>>n;
		long long int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			if(a[i]>=b[i])
                sum=sum+b[i];
            else
            	sum=sum+a[i];
		}
		cout<<sum<<"\n";
	}
}