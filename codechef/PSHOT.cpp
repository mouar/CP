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
		string str;
		cin>>str;
		int a=0,b=0;
		for(int i=0;i<2*n;i++)
		{
			if(i%2==0)
			{
               if(str.at(i)=='1')
				    a++;
			}
			else
			{
				if(str.at(i)=='1')
				   b++;
			}
		}
		//cout<<a<<" "<<b<<"\n";
		if(a==b)
			cout<<2*n<<"\n";
		else if(a>b)
		{
			//cout<<"check";
			int ca=0,cb=0,c=0;
			for(int i=0;i<2*n;i++)
		     {
			    if(i%2==0)
			      {
                     if(str.at(i)=='1')
				        ca++;
			      }
			    else
			      {
			      	c++;
				    if(str.at(i)=='1')
				       cb++;
			      }
                //cout<<ca-cb<<" "<<n-c<<"\n";
			    if(ca-cb > n-c)
			      {
                     cout<<i+1<<"\n";
                     break;
			      }
		     }
		}
		else
		{
            int ca=0,cb=0,c=0;
			for(int i=0;i<2*n;i++)
		     {
			    if(i%2==0)
			      {
			      	 c++;
                     if(str.at(i)=='1')
				        ca++;
			      }
			    else
			      {
				    if(str.at(i)=='1')
				       cb++;
			      }
			    if(cb-ca > n-c)
			    {
			      	cout<<i+1<<"\n";
			      	break;
			    }
		     }
		}
	}
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       queue<pair<int, int> > q;
       int n;
       cin>>n;
       int sa=0,sb=0;
       for(int i=0;i<n;i++)
       {
           int a,b;
           cin>>a>>b;
           if(a==1)
             sa++;
           if(b==1)
             sb++;
           q.push(make_pair(a,b));
       }
       int ca=0,cb=0;
       int count=0;
       if(sa==sb)
          cout<<2*n<<"\n";
       else if(!q.empty())
       {
           pair<int,int> p= q.front();
           q.pop();
           count++;
           if(p.first)
             ca++;
           if(p.second)
             cb++;
           if(sa>sb)
             {
                 if(ca-cb > n-q.size())
                    cout<<count*2<<"\n";
             }
           else
              {
                  if(cb-ca > n-q.size())
                    cout<<count*2<<"\n";
              }
             
       }
       
   }
}*/