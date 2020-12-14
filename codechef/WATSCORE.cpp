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
        int arr[11]={0};
        for(int i=0;i<n;i++)
        {
           int p;
           int s;
           cin>>p;
           cin>>s;
           if(arr[p-1]<s)
               arr[p-1]=s;
        }
        /*for(int j=0;j<11;j++)
        {
        	cout<<arr[j]<<" ";
        }
        cout<<"\n";*/
        int sum=0;
        for(int i=0;i<8;i++)
        {
           sum=sum+arr[i];
        }
        cout<<sum<<"\n";
	}
}