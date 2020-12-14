#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct point
{
	ll x;
	ll y;
	point(ll x,ll y) : x(x) ,y(y) {}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	vector<point> v;
    	ll n,q;
    	ll x1,x2,y1;
    	cin>>n;
    	cin>>q;
    	for(int i=1;i<=n;i++)
    	{
    		ll k;
    		cin>>k;
    		v.push_back(point(i,k));
    	}
        for(int i=0;i<q;i++)
        {
    	    int j=0;
    	    cin>>x1>>x2>>y1; 
        	ll count=0;
        	
            for(auto it=v.begin();it!=v.end();it++)
            {
            	int a,b;
            	if(it->x >= x1 && it->x <= x2)
            	{
            		/*if(it->x == x1 && it->y==y1)
            		{
                        if(it==v.begin())
                        {
                        	count++;
                        }
                        else if(it==(v.end()-1))
                        {
                        	continue;
                        }
                        else
                        {
                        	count++;
                        }
            		}
            		else if(it->x == x2 && it->y ==y1)
            		{
            			if(it == v.begin())
            				continue;
            			else if(it== (v.end()-1) )
            			{
            				count++;
            			}
            			else
            				count++;

            		}*/
                    if(it->y <= y1 && (it+1)->y >= y1 && (it+1)->y > 0 ){
                	    a=y1-(it->y);
                	    b=y1-((it+1)->y);
                        //cout<<it->y<<" "<<(it+1)->y<<" ";
                    }
                    else if(it->y >= y1 && (it+1)->y <= y1 && (it+1)->y > 0){
                	    a=y1-(it->y);
                	    b=y1-((it+1)->y);
                	    //cout<<it->y<<" "<<(it+1)->y<<" ";
                    }
                    if(a*b<=0)  
                  	   count++;
                }
                  	
            }
            cout<<count<<"\n";  
        }
    }

	return 0;
}