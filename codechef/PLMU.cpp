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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int count0=0;
		int count2=0;
		for(int i=0;i<n;i++)
		{
            if(arr[i]==0)
               count0++;
           if(arr[i]==2)
           	   count2++;
		}
		int pairs=0;
		for(int i=count0-1;i>0;i--)
            pairs=pairs+i;
        for(int i=count2-1;i>0;i--)
         	pairs=pairs+i;
        cout<<pairs<<"\n";
	}
}