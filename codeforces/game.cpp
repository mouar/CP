#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;

	string s;
	cin>>s;
	int count_a=0,count_b=0;
	for(int i=0;i<n;i++)
	{
		if(s.at(i)=='A')
            count_a=count_a+1;
        if(s.at(i)=='D')
        	count_b=count_b+1;
	}
	if(count_a>count_b)
		cout<<"Anton";
	else if(count_a<count_b)
		cout<<"Danik";
	else
		cout<<"Friendship";
	return 0;
}