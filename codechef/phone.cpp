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
       int p[n];
       for(int j=0;j<n;j++)
       {
       	cin>>p[j];
       }

       int count=1;
       for(int j=1;j<n;j++)
       {
       	   int k,loop;
       	   loop=0;
       	   int r;
       	   r=j-1;
       	   if(j<5)
       	   	 k=j;
       	   else
       	   	 k=5;
       	   int x;
       	   x=0;

       	   while(x<k)
       	   {
       	   	 if(p[j]<p[r])
       	   	 {
                 loop=loop+1;
                // cout<<p[r]<<" "<<r<<" ";
                 r=r-1;
                 x++;
       	   	 }
       	   	 else
       	   	 	break;
            // if(loop=k)
             //	count=count+1;
       	   }
       	   if(loop==k)
       	   {
             	count=count+1;
             	//cout<<j<<" "<<loop<<" ";
       	   }

       }
       cout<<count<<endl;
	}
}