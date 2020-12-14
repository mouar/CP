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
		int a[n];
		a[0]=a[1]=0;
		for(int i=2;i<n;i++)
		{
           //int x=a[i-1];
			int x=0;
			int j=i-2;
           while(j>=0)
           	 {
           	 	if(a[j]==a[i-1])
           	 	{
                   // cout<<j<<" ";
           	 		a[i]=(i-1)-j;
                    x++;
                    j=-1;
           	 	}
           	 	j--;
           	 }
           	 if(x==0)
           	 {
           	 	a[i]=0;
           	 }

		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			//cout<<a[i]<<" ";
			if(a[n-1]==a[i])
				count++;
		}
		cout<<count<<endl;
	}
}