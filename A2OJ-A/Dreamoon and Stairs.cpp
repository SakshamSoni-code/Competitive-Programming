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
   int n,m;
   cin>>n>>m;
   for(int i=n/2+n%2;i<=n;i++)
   {
       if(i%m==0)
       {
           cout<<i<<endl;
           return 0;
       }
   }
   cout<<-1<<endl;
}