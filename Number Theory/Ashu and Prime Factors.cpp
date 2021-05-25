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
const int N=1e6;
int ar[N+1];
int ans[N+1];
void seive()
 {
     

    for(int i=2;i<=N;i++)
    {
        if(ar[i]==0)
        {
            int cnt=0;
            for(int j=i;j<=N;j+=i)
            {
                if(ar[j]==0)
                {
                    cnt++;
                    ar[j]=i;
                }
            }
          ans[i]=cnt;
        }
      
    }

    
 }
 
int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   seive();
   lli t;
   cin>>t;
   lli x;
   while(t--)
   {
       cin>>x;
      cout<<ans[x]<<endl;

   }
}  