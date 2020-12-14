#include<bits/stdc++.h>
using namespace std;

long long int power_n(int x,int y)
{
   unsigned long long int power=1;
   if(y==0)
   	 return 1;
   else
   	{
      for(int i=0;i<y;i++)
      {
       	power=power*x;
      }
   }
   return power;
}
double distance(int x,int y,int a,int b)
{
	double dist;

	dist=sqrt(power_n(a-x,2)+power_n(b-y,2));
	cout<<fixed<<setprecision(15)<<"";
    return dist;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   double sum1=INT_MAX;
	  // double sum2=INT_MAX;
       long long int x,y;
       cin>>x>>y;
       int n,m,k;
       cin>>n>>m>>k;
       int a[2*n],b[2*m],c[2*k];
       for(int i=0;i<2*n;i++)
            cin>>a[i];
       for(int i=0;i<2*m;i++)
       	    cin>>b[i];
       for(int i=0;i<2*k;i++)
       	    cin>>c[i];
       	double r,s,t;
       for(int i=0;i<2*n;i+=2)
       {
           r=distance(x,y,a[i],a[i+1]);
       	for(int j=0;j<2*m;j+=2)
       	{
            s=distance(a[i],a[i+1],b[j],b[j+1]);
            //if((r+s)<sum1)
            //	sum1=r+s;
           for(int p=0;p<2*k;p+=2)
           {
           	t=distance(b[j],b[j+1],c[p],c[p+1]);
           	if((r+s+t)<sum1)
           	{
            		//cout<<r <<s <<t <<endl;
          		sum1=r+s+t;
           	}
           }
       	}
       }
       double e,f,g;
       for(int i=0;i<2*m;i+=2)
       {
          e=distance(x,y,b[i],b[i+1]);
          for(int j=0;j<2*n;j+=2)
          {
              f=distance(b[i],b[i+1],a[j],a[j+1]);
              for(int p=0;p<2*k;p+=2)
              {
              	g=distance(a[j],a[j+1],c[p],c[p+1]);
              	if((e+f+g)<sum1)
           	    {
           		   //cout<<r <<s <<t <<endl;
           		   sum1=e+f+g;
           	    }
              }
          }
       }
       cout<<sum1<<endl;
	}
	return 0;
}