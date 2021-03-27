#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int> 
#define vii vector<ii>
#define ll long long
#define l long
#define lli long long int

#include<bits/stdc++.h>
using namespace std;


int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   int s,n;
   cin>>s>>n;
   pair<int ,int> a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i].first>>a[i].second;
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       if(s>a[i].first)
       {
           s+=a[i].second;
       }
       else{
           cout<<"NO"<<endl;
           return 0;
       }
   }
   cout<<"YES"<<endl;
}