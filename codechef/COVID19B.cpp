// #include "bits/stdc++.h" 
// using namespace std; 
// #define max(a, b) (a < b ? b : a) 
// #define min(a, b) ((a > b) ? b : a) 
// #define mod 1e9 + 7 
// #define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++) 
// #define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--) 
// #define INF 1000000000000000003 
// typedef long long int ll; 
// typedef vector<long long int> vi; 
// typedef pair<long long int, long long int> pi; 
// #define F first 
// #define S second 
// #define PB push_back   //queue
// #define POPF pop_front
// #define PF push_front  //deque
// #define POPB pop_back
// #define MP make_pair 
// int main() 
// { 
//     ios::sync_with_stdio(0); 
//     cin.tie(0); 
//     int t; 
//     cin >> t; 
//     while (t--) 
//     { 
//          int n;
//          cin>>n;
//          int v[n];
//          FOR(i,n) cin>>v[i];
//          int count[n];
//          FOR(i,n) count[i]=1;
//          int max=0,min=INT_MAX;
//        //  int max_ind,min_ind;
//          for(int i=0;i<n;i++)
//          {
//          	for(int j=i+1;j<n;j++)
//          	{
//          		if(v[i]>v[j])
//          			count[i]++;
//          	}
//          	// if(v[i]>max){
//          	// 	max=v[i];
//          	// 	max_ind=i;
//          	// }
//          	// if(v[i]<min){

//          	// 	min=i;
//          	// 	min_ind=i;
//          	// }
//          }
//          // FOR(i,n) cout<<count[i]<<" ";
//          // cout<<"\n";
//          int arr[n];
//          arr[0]=v[0];
//          int a=v[0];
//          for(int i=1;i<n;i++)
//          {
//               if(v[i]>a)
//               {
//               	a=v[i];
//               	arr[i]=a;
//               }
//               else
//               	arr[i]=a;
//          }
//          int best=INT_MAX,worst=0;
//          int arr1[n];
//          FOR(i,n) arr1[i]=1;
//          FOR(i,n)
//          {
         	
//             for(int j=0;j<i;j++)
//             {
//             	if(v[j]>v[i])
//                     arr1[i]++;
//             }
//             for(int k=i+1;k<n;k++)
//             {
//             	if(arr[i]>v[k])
//             		arr1[i]++;
//             }

//          }
//         // cout<<min_ind<<" "<<max_ind<<" \n";
//          FOR(i,n) cout<<arr1[i]<<" ";
//          cout<<"a\n";
//         // int b=INT_MAX;
//          FOR(i,n)
//          {
//          	// if(min_ind == 0 || max_ind == n-1)
//          	// {
//          	// 	best=1;
//          	// 	break;
//          	// }
//             if(arr1[i]<best)
//             	best=arr1[i];
//          }
//          for(int i=0;i<n;i++)
//          {
//          	// if(count[i] == 0)
//          	// {
//          	// 	best=1;
//          	// 	break;
//          	// }
//          	// else if(count[i] > 0)
//          	// {
//           //       if(best>count[i])
//           //       	best=count[i];
//          	// }

//          	if(count[i]>worst)
//          		worst=count[i];
//          }

//         // cout<<best<<" "<<worst<<"\n";
//     } 
//     return 0; 
// } 
#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<long long int> vi; 
typedef pair<long long int, long long int> pi; 
#define F first 
#define S second 
#define PB push_back   //queue
#define POPF pop_front
#define PF push_front  //deque
#define POPB pop_back
#define MP make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t; 
    cin >> t; 
    while (t--) 
    { 
         int n;
         cin>>n;
         int v[n];
         FOR(i,n) cin>>v[i];
         int count[n];
         FOR(i,n) count[i]=1;
         int max[n];
         int min[n];
         max[0]=v[0];
         min[n-1]=v[n-1];
         FOR(i,n)
         {
             int a=0;
             int b=INT_MAX;
             for(int j=0;j<i;j++)
             {
                 if(v[j]>a)
                   {
                       a=v[j];
                       max[i]=a;
                   }
                 else
                     max[i]=a;
             }
             for(int j=i+1;j<n;j++)
             {
                 if(v[j]<b)
                 {
                     b=v[j];
                     min[i]=b;
                 }
                 else
                    min[i]=b;
             }
         }
         FOR(i,n)
         {
            for(int j=0;j<i;j++)
            {
                if(v[j]>v[i])
                    count[i]++;
                else
                {
                    if(v[i]>min[i] && v[j]>min[i])
                        count[i]++;
                }
            }
            for(int j=i+1;j<n;j++)
            {
                if(v[j]<v[i])
                   count[i]++;
                else
                {
                    if(v[j]<max[i])
                      count[i]++;
                }
            }
         }
         int best=INT_MAX,worst=0;
         FOR(i,n)
         {
             if(count[i]<best)
             {
                 best=count[i];
             }
             if(count[i]>worst)
             {
                 worst=count[i];
             }
         }
        // FOR(i,n) cout<<max[i]<<" "<<min[i]<<"\n";
        // cout<<"\n";
        // FOR(i,n) cout<<count[i]<<" ";
        // cout<<"\n";
        cout<<best<<" "<<worst<<"\n";
    } 
    return 0; 
} 