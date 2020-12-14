#include<iostream>
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
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		unordered_map<int,int> mp;
         for(int i=0;i<n;i++)
         	mp[a[i]]++;
         int p=n/4;
         int count=0;
         for(auto x: mp)
         {
               if(x.second>p)
               	  count++;
         }
         if(count==0)
         {
         	if(a[p]!=a[p-1] && a[2*p]!=a[2*p-1] && a[3*p]!=a[3*p-1])
             cout<<a[p]<<" "<<a[2*p]<<" "<<a[3*p]<<endl;
            else
            	cout<<-1<<endl;
         }
         else
         	cout<<-1<<endl;

	}
}