#include<iostream>
using namespace std;

int main()
{
	int t,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n;
		cin>>m;
		int a[m];
		for(int j=0;j<m;j++)
		{
			cin>>a[j];
		}
		if(n>=m)
		{
			for(int j=0;j<m;j++)
			{
              for(int k=j+1;k<m;k++)
                  {
                  	if(a[j]==a[k])
                  		count=1;
                  }
			}
		}
		else
		{
			int x=0;
			int p=1;
			while(m>x)
			{
                for(int j=x;j<p*n-1;j++)
                {
                	//cout<<j<<"a";
                	for(int k=j+1;k<p*n;k++)
                	{
                         //cout<<k<<"b";
                		if(a[j]==a[k])
                			count=1;
                	}
                }
                x=x+n;
                p++;
			}
		}
		if(count==1)
			cout<<"NO";
		else
			cout<<"YES";
	}
}