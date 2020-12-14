#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
       cin>>s[i]; 
    }
    int d,m;
    int a[n-1];
    cin>>d;
    cin>>m;
    int count=0;
    if(n==m)
        count=1;
    else
  {
    for(int i=0;i<n-1;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<i+m;j++)
        {
          a[i]=a[i]+s[j];
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==d)
          count=count+1;
    }
  }
    cout<<count;
}