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
   int n,d,sum=0,x;
   cin>>n>>d;
   int temp=n;
   while(temp--)
   {
       cin>>x;
       sum+=x;
   }
   //cout<<sum<<endl;
   int val=sum+(n-1)*10;
   //cout<<val<<endl;
   if(val<=d)
   {
       
       cout<<(d-sum)/5<<endl;
   }
   else
    cout<<-1<<endl;

}