#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s,p,v;
        int max=0;
        for(int i=0;i<n;i++)
        {
            cin>>s>>p>>v;
            int a=floor(p/(s+1)) * v;
            //cout<<s<<" "<<p<<" "<<v<<" "<<a<<" ";
            if(max<a)
            {
                max=a;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
