#include<bits/stdc++.h>
using namespace std;

unsigned long long int power_n(int x,int y)
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
bool isperfectsquare(unsigned long long int x,int n)
{
    unsigned long long int rem;
    unsigned long long int num=x;
   	    for(int k=0;k<n;k++)
   			{
               rem=num % 10;
               num=num/10;
               if(rem==0)
                  {
                      return false;
                  }
   			}
   		    int numb=x,remd;
   			unsigned long long int y=0;
   			//cout<<numb<<" ";
   			for(int k=0;k<n;k++)
   			{
               remd=numb % 10;
               numb=numb/10;
               //cout<<remd<<" ";
               y=y+power_n(remd,2);
   			}
   			long double sr=sqrt(y);
   			unsigned long long int p=sr;
            	return ((p-sr)==0);
}
unsigned long long int number(int x)
{
    unsigned long long int a=power_n(10,x-1);
    for(int i=0;i<x-1;i++)
    {
        a=a+power_n(10,i);
    }
    //cout<<a<<endl;
    return a;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int check=1;
       int n;
       cin>>n;
        if(n==1)
        {
          cout<<"1"<<endl;
          check=0;
        }
        else if(n==2)
        {
          cout<<"34"<<endl;
          check=0;
        }
        else
          {
             unsigned long long int x=number(n);
             unsigned long long int y=power_n(10,n);
             while(x<y)
             {
                 if(isperfectsquare(x,n))
                 {
                     cout<<x<<endl;
                     check=0;
                     break;
                 }
                 else
                 {
                  x=x+1;
                 }
             }
          }
          if(check==1)
             cout<<"-1"<<endl;
   }
   return 0;
}