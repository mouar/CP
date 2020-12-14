#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	   int a[6];
	   for(int j=0;j<6;j++)
	   {
	   	cin>>a[j];
	   }
	   if(a[0]==a[1])
	   {
	   	  if(a[1]==a[2])
	   	  {
	   	  	if(a[3]==a[4] && a[4]==a[5])
	   	  		cout<<"FAIR";
	   	  	else
	   	  		cout<<"NOT FAIR";
	   	  }
	   	  if(a[1]>a[2])
	   	  {
	   	  	if(a[3]==a[4] && a[4]>a[5])
	   	  		cout<<"FAIR";
	   	  	else
	   	  		cout<<"NOT FAIR"; 
	   	  }
	   	  if(a[1]<a[2])
	   	  {
	   	  	if(a[3]==a[4] && a[4]<a[5])
	   	  		cout<<"FAIR";
	   	  	else
	   	  		cout<<"NOT FAIR";
	   	  }
	   }
	   if(a[0]>a[1])
	   {
	   	if(a[0]==a[2])
	   	{
	   		if(a[3]==a[5] && a[3]>a[4])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	}
	   	else
	   	{
	   	if(a[1]==a[2])
	   	{
            if(a[3]>a[4] && a[4]==a[5])
                cout<<"FAIR";
            else
            	cout<<"NOT FAIR";
	   	}
	   	if(a[1]>a[2])
	   	{
	   		if(a[3]>a[4] && a[4]>a[5])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	}
	   	if(a[1]<a[2])
	   	{
	   		if(a[0]>a[2])
	   		{
	   		if(a[3]>a[4] && a[4]<a[5] && a[3]>a[5])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	    }
	   	    if(a[0]<a[2])
	   	    {
	   	    if(a[3]>a[4] && a[4]<a[5] && a[3]<a[5])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	    }
	   	}

	   }
	   }
	   if(a[0]<a[1])
	   {
	   	if(a[0]==a[2])
	   	{
	   		if(a[3]==a[5] && a[3]<a[4])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	}
	   	else{
	   	if(a[1]==a[2])
	   	{
	   		if(a[3]<a[4] && a[4]==a[5])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	}
	   	if(a[1]>a[2])
	   	{
	   		if(a[0]>a[2])
	   		{
	   		  if(a[3]<a[4] && a[4]>a[5] && a[3]>a[5])
	   			cout<<"FAIR";
	   		  else
	   			cout<<"NOT FAIR";
	   	    }
	   	    if(a[0]<a[2])
	   	    {
	   	    	if(a[3]<a[4] && a[4]>a[5] && a[3]<a[5])
	   			  cout<<"FAIR";
	   		    else
	   			  cout<<"NOT FAIR";
	   	    }
	   	}
	   	if(a[1]<a[2])
	   	{
	   		if(a[3]<a[4] && a[4]<a[5])
	   			cout<<"FAIR";
	   		else
	   			cout<<"NOT FAIR";
	   	}
	   }
	   }
	   cout<<endl;
	}
	return 0;
}