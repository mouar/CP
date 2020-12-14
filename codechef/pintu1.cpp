#include<bits/stdc++.h>
using namespace std;

void hash1(vector<int> fruit[],int a,int b)
{
    fruit[a].push_back(b);
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,m;
   	cin>>n>>m;
   	int basket[n];
   	int price[n];
   	vector<int> fruit[m+1];
    for(int i=0;i<n;i++)
    	cin>>basket[i];
    for(int i=0;i<n;i++)
    	cin>>price[i];
    for (int i = 0; i < n; ++i)
    {
    	hash1(fruit,basket[i],price[i]);
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
    	if(basket[i]==basket[i+1])
    	{
    		continue;
    	}
       int min1=0;
       int a=basket[i];
       for(auto x: fruit[a])
       {
       	  min1+=x;
       }
       ans=min(min1,ans);
    }
    cout<<ans<<endl;
    
   }
}