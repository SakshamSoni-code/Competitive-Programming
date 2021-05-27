/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/*---------------------------------*//******GIVE YOUR BEST AND FORGET THE REST*****/



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

const int N=1e6;
long long ar[N+1];
long long sum[N+1];
 void seive()
 {
 
     ar[0]=ar[1]=1;
     for(long long i=2;i*i<=N;i++)
     {
         if(ar[i]==0)
         {
             for(long long j=i*i;j<=N;j+=i)
             {
                 ar[j]=1;
             }
         }
     }
 }  
  
 void prefixsum()
 {
     
       sum[0]=sum[1]=0;
       for(long long i=2;i<=N;i++)
       {
           if(ar[i]==0)
           {
               sum[i]=i+sum[i-1];
           }
           else
           {
               sum[i]=sum[i-1];
           }
       }
 }

int main()
{
    
 ios_base::sync_with_stdio(false); 
 cin.tie(nullptr); cout.tie(nullptr);
   
   long long n;
   cin>>n;
   long long L,R;
   seive();
   prefixsum();
   
   while(n--)
   {
       cin>>L>>R;
       
       cout<<sum[R]-sum[L-1]<<"\n";
   }
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
