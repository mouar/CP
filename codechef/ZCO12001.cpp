#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       stack <int> s;
       int nest_depth=0,nest_depth_pos,max_seq=0,max_seq_pos;
       int a[n];
       for(int i=0;i<n;i++)
          cin>>a[i];
      /* int count=0;
       for(int i=0;i<n;i++)
       {
         if(a[i]==1)
         {
           count++;
           continue;
         }
         else
         {
           if (count>nest_depth)
           {
             //cout<<i<<" "<<count<<"\n";
             nest_depth=count;
             nest_depth_pos=i;
           }
           count=0;
         }         
       }*/
       int count=0;
       int count_seq=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==1)
           {
             s.push(a[i]);
             count_seq++;
           }
           else
           {
             s.pop();
             count_seq++;
           }
           if(s.size() > nest_depth)
            {
              nest_depth=s.size();
              nest_depth_pos=i+1;
            }
           if(s.empty())
           {
            if (count_seq>max_seq)
            {
              max_seq=count_seq;
              max_seq_pos=i - count_seq + 2;
            }
            count_seq=0;
           }
       }
       cout<<nest_depth<<" "<<nest_depth_pos<<" "<<max_seq<<" "<<max_seq_pos<<"\n";
}
    