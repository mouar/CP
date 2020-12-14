#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m,q;
		cin>>n>>m>>q;
		int matrix[n][m]={0};
		int x[q],y[q];
	    for(int j=0;j<q;j++)
	    {
	    	cin>>x[j]>>y[j];
	    }
		for(int j=0;j<q;j++)
		{
		//	int x,y;
		//	cin>>x>>y;
			int w=x[j]-1;
			int z=y[j]-1;
			for(int p=0;p<m;p++)
			{
                matrix[w][p]=matrix[w][p]+1;
			}
			for(int p=0;p<n;p++)
			{
				matrix[p][z]=matrix[p][z]+1;
			}
		}
		int count=0;
        
        for(int a=0;a<n;a++)
        {
        	for(int b=0;b<m;b++)
        	{
        		if(matrix[a][b]%2!=0)
        			count++;
        	}
        }
		/*int count=0;
		for(int j=0;j<q;j++)
		{
		    int a=x[j]-1,c=0;
		    int e[q]={0};
		    while(matrix[a][c]%2!=0 && c<m)
		    {
		    	count=count+1;
		    	c++;
		    }
		}
		for(int j=0;j<q;j++)
		{
		    int b=x[j]-1,d=0;
		    while(matrix[d][b]%2!=0 && d<n)
		    {
		    	count=count+1;
		    	d++;
		    }
		}*/
		cout<<count<<endl;
	}
}