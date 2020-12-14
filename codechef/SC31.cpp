#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a[n];
		for(int i=0;i<n;i++)
		{
            cin>>a[i];
		}
		char  x[10],y[10];
        int count=0;
        strcpy(x,a[0].c_str());
		for(int i=1;i<n;i++)
		{
			strcpy(y,a[i].c_str());
			int j=0;
			while(j<10)
			{
				if(x[j]=='0' && y[j]=='0')
					{x[j]='0'; j++;}
			    if(x[j]=='0' && y[j]=='1')
			    	{x[j]='1';j++;}
			    if(x[j]=='1' && y[j]=='0')
			    	{x[j]='1'; j++;}
			    if(x[j]=='1' && y[j]=='1')
			    	{x[j]='0'; j++;}
			}
			//cout<<x[4];
			//cout<<endl;
			/*for(int j=0;j<10;j++)
            {
            	cout<<x[j];
            }
            cout<<endl;*/
		}
		for(int i=0;i<10;i++)
		{
			if(x[i]=='1')
				count++;
		}
		cout<<count<<endl;
	}
}