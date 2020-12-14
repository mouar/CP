//sliding window technique

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		map<int, int> m;
		int count=0,j=0,max=0;
		for(int i=0;i<n;i++)
		{
           if(k>n)
           {
           	max=n;
           	break;
           }
           m[a[i]]++;
           count++;   //size of sliding window
           if (m.size()<k)
           {
           	  if(count>max)
           	  	max=count;
           }
           else if(m.size()>=k)
           {
           	m[a[j]]--;
           	//auto it=m.find(a[j]);
           	if(m[a[j]]==0)
           		m.erase(a[j]);
           	j++;
           	count--;
           }
		}
		cout<<max<<"\n";
	}
} 