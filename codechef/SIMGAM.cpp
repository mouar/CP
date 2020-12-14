#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		char term;
		int n;
		cin>>n;
			int c;
			cin>>c;
			int a[c];
			/*if(c%2==0 && term=='c')
				term='c';
			else if(c%2==0 && term=='r')
				term='r';
			else
			    term='r';*/
			if(c%2==0)
				term='h';
			else
				term='r';
			for(int j=0;j<c;j++)
			{
				cin>>a[j];
			}
			if(c%2==0)
			{
			    for(int j=0;j<(c/2);j++)
			    	sum=sum+a[j];
			}
			else
			{
				for(int j=0;j<(c+1)/2;j++)
					sum=sum+a[j];
			}
			////////////////////////////////////////
            //cout<<sum<<endl;
			for(int i=1;i<n;i++)
			{
				//cout<<sum<<endl;
				int y;
				cin>>y;
			   int x[c];
			for(int j=0;j<y;j++)
			{
				cin>>x[j];
			}
			if(y%2==0)
			{
			    for(int j=0;j<(y/2);j++)
			    	sum=sum+x[j];
			}
			else
			{
				if(term=='h')
				{
					for(int j=0;j<(y+1)/2;j++)
			    	  sum=sum+x[j];
				}
				else if(term=='r')
				{
                    for(int j=0;j<(y-1)/2;j++)
			    	  sum=sum+x[j];
				}
			}
			//cout<<sum<<endl;
			/*if(i==n-1)
				break;
			   cin>>c;
			   int a[c];
			for(int j=0;j<c;j++)
			{
				cin>>a[j];
			}*/
			if(y%2==0 && term=='h')
				term='h';
			else if(y%2==0 && term=='r')
				term='r';
			else if(y%2!=0 && term=='h')
			    term='r';
			else if(y%2!=0 && term=='r')
				term='h';
			}
		cout<<sum<<endl;
	}
}