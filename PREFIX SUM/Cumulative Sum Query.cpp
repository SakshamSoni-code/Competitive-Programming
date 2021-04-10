#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int> 
#define vii vector<ii>
#define ll long long
#define lli long long int

#include<bits/stdc++.h>
using namespace std;










int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int pre[n];
   for(int i=0;i<n;i++)
   {
       if(i==0) pre[i]=arr[0];
       else pre[i]=pre[i-1]+arr[i];
   }
   
   int q;
   cin>>q;
   while(q--)
   {
       int L,R,S;
       S=0;
       cin>>L>>R;
       S=pre[R];
       if(L-1>=0) S=S-pre[L-1];
       cout<<S<<endl;
   }
   
   
   
   
   
   
}