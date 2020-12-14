#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int r=0;
		long long int j=n-1;
		long long int i = 0;
		while(j>=i)
		{
			long long int x=a[i]%k;
	    	//cout<<x<<"a ";
	    	r=r+x;
	    	//cout<<r<<" ";
	    	a[i]=a[i]-x;
	    	if (j>=i)
	    	{
	    		long long int y=a[j]%k;
	    	    long long int z=k-y;
	    	    if (r>=z)
	    	      {
	    		     r=r-z;
	    		     a[j]=a[j]+z;
	    		     j=j-1;
	    	      }
	    	    else if(y==0)
	    	    	j--;
	    	}
	    	i++;
		}
	    cout<<r<<"\n";
	}
}