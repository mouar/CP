#include<bits/stdc++.h>
using namespace std;

//question==>>https://www.codechef.com/submit/KQM24A
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sum=0;
	int a=s.length();
	int arr[a];
	for(int i=0;i<s.length();i++)
	{
       if(s.at(i)=='a')
          {
          	sum+=1;
          	arr[i]=1;
          }
        else if(s.at(i)=='b')
          {
          	sum+=2;
          	arr[i]=2;
          }
          else if(s.at(i)=='c')
          {
          	sum+=3;
          	arr[i]=3;
          }
      else if(s.at(i)=='d')
          {
          	sum+=4;
          	arr[i]=4;
          }
        else if(s.at(i)=='e')
          {
          	sum+=5;
          	arr[i]=5;
          }
         else if(s.at(i)=='f')
          {
          	sum+=6;
          	arr[i]=6;
          }
         else if(s.at(i)=='g')
          {
          	sum+=7;
          	arr[i]=7;
          }
         else if(s.at(i)=='h')
          {
          	sum+=8;
          	arr[i]=8;
          }
         else if(s.at(i)=='i')
          {
          	sum+=9;
          	arr[i]=9;
          }
         else if(s.at(i)=='j')
          {
          	sum+=10;
          	arr[i]=10;
          }
         else if(s.at(i)=='k')
          {
          	sum+=11;
          	arr[i]=11;
          }
         else if(s.at(i)=='l')
          {
          	sum+=12;
          	arr[i]=12;
          }
         else if(s.at(i)=='m')
          {
          	sum+=13;
          	arr[i]=13;
          }
         else if(s.at(i)=='n')
          {
          	sum+=14;
          	arr[i]=14;
          }
         else if(s.at(i)=='o')
          {
          	sum+=15;
          	arr[i]=15;
          }
         else if(s.at(i)=='p')
          {
          	sum+=16;
          	arr[i]=16;
          }
         else if(s.at(i)=='q')
          {
          	sum+=17;
          	arr[i]=17;
          }
         else if(s.at(i)=='r')
          {
          	sum+=18;
          	arr[i]=18;
          }
         else if(s.at(i)=='s')
          {
          	sum+=19;
          	arr[i]=19;
          }
         else if(s.at(i)=='t')
          {
          	sum+=20;
          	arr[i]=20;
          }
         else if(s.at(i)=='u')
          {
          	sum+=21;
          	arr[i]=21;
          }
         else if(s.at(i)=='v')
          {
          	sum+=22;
          	arr[i]=22;
          }
         else if(s.at(i)=='w')
          {
          	sum+=23;
          	arr[i]=23;
          }
         else if(s.at(i)=='x')
          {
          	sum+=24;
          	arr[i]=24;
          }
         else if(s.at(i)=='y')
          {
          	sum+=25;
          	arr[i]=25;
          }
         else if(s.at(i)=='z')
          {
          	sum+=26;
          	arr[i]=26;
          }
	}
	for (int i = 0; i < a; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int count=0;
	if(sum==n)
		count=0;
	else if(sum<n)
	{
	   sort(arr,arr+a);
	   int p=n-sum;
       for(int i=0;i<a;i++)
       {
       	  if(p>0)
          	  count++;
          int x=26-arr[i];
          p=p-x;
          if(p<=0)
            break;
       }
	}
	else if(sum>n)
	{
		int p=sum-n;
		sort(arr,arr+a,greater<int>());
		for (int i = 0; i < a; i++)
		{
			if(p>0)
				count++;
			p=p-(arr[i]-1);
			if(p<0)
				break;        
		}
	}
	cout<<count<<endl;
}