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
   int n,m,cnt=0;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(i%2==0)
           {
               cout<<"#";
               if(j==m-1) cout<<endl;
           }
           else
           {
               cnt++;
               if(cnt%2!=0 && j<m-1)
               {
                   cout<<".";
                   cnt=0;
               }
               else if(cnt%2!=0 && j==m-1)
               {
                   cout<<"#";
                   cout<<endl;
               }
               else if(cnt%2==0 && j==0)
               {
                   cout<<"#";
                   cnt++;
               }
               else
               {
                   cout<<".";
                   cnt++;
                   if(j==m-1) 
                   {
                       cout<<endl;
                      cnt=0;
                   }
               }
           }
       }
   }

}