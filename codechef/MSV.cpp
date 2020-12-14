#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		//int b[n]={0};
		int x=0;
		for(int j=1;j<n;j++)
		{
			int p=0;
              for(int y=0;y<j;y++)
              {
              	//int z=a[y];
              	if(a[y] % a[j] == 0)
              		 p=p+1;
              }
              if(x<p)
              	x=p;
		}
		cout<<x;
		/*int max=0;
		for(int j=0;j<n;j++)
		{
			if(b[j]>max)
				max=b[j];
		}
		cout<<max;*/
	}
	return 0;
}