#include<bits/stdc++.h>
using namespace std;

int precedence(char a)
{
	if(a=='-' || a=='+')
		return 1;
	else if(a=='*' || a=='/')
		return 2;
	else if(a=='^')
		return 3;
	else 
		return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int length;
		cin>>length;
		stack <char> s;
		//s.push('n');
		string st;
		cin>>st;
		string postfix;
		for(int i=0;i<length;i++)
		{
			if(st[i]>='A' && st[i]<='Z')
				postfix +=st[i];
			else if(st[i]=='(')
				s.push(st[i]);
			else if(st[i]==')')
			{
				while(!s.empty() && s.top() !='(')
				{
					char c = s.top();
					postfix += c;
					s.pop();
				}
				if(s.top()=='(')
					s.pop();
			}
			else
			{
				while(!s.empty() && precedence(s.top()) >= precedence(st[i]))
				{
					char c=s.top();
					postfix += c;
					s.pop();
				}
				s.push(st[i]);
			}
			//cout<<postfix<<"\n";
		}
		while(!s.empty())
		{
			char c=s.top();
			postfix +=c;
			s.pop();
		}
		cout<<postfix<<"\n";
	}
}