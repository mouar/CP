#include<iostream>
#include<unordered_map>
using namespace std;

bool areequal(int a[],int n)
{
      unordered_map<int,int> m;
      for(int i=0;i<n;i++)
      {
      	m[a[i]]++;
      }
      if(m.size()==1)
      	return true;
      else
      	return false;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int p[n];
		for(int j=0;j<n;j++)
		{
			cin>>p[j];
		}
		if(areequal(p,n))
		{
		   for(int j=0;j<n;j++)
		   	   p[j]=0;
		}
		else
		{
        for(int j=0;j<k;j++)
        {
        	int a=p[j%n];
        	int b=p[n-j%n-1];
        	p[j%n]=a^b;
        }
        }
        for(int j=0;j<n;j++)
        {
        	cout<<p[j]<<" ";
        }
	}

}