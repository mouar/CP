#include<bits/stdc++.h>
using namespace std;

long int ap_sum(float a,float n,float d)
{
   long int sum = 0; 
    /*for (int i=0;i<n;i++) 
    { 
        sum = sum + a; 
        a = a + d; 
    } */
   sum = n * ( a + ((n - 1)/2) * d); 
    return sum;  
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   long	int n,k;
		cin>>n>>k;
	   long	int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
	  long int count1[n]={0};
		for(int i=0;i<n-1;i++)
		{
             for(int j=i+1;j<n;j++)
             {
             	if(a[i]>a[j])
             		count1[i]++;
             }
		}
       long int count2[n]={0};
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n;j++)
        	{
        		if(a[i]>a[j])
        			count2[i]++;
        	}
        }
        /*for(int i=0;i<n;i++)
        {
        	cout<<count1[i]<<" "<<count2[i]<<endl;
        }*/
       long int pair=0;
        for(int i=0;i<n;i++)
        {
        	long int p=0;
           if(count2[i]!=0)
           	  {
           	  	p=(k*count1[i])+ap_sum(count2[i],k-1,count2[i]);
           	  }
           	 //cout<<p<<endl;
           pair=pair+p;
        }
       cout<<pair<<endl;

	}
	return 0;
}