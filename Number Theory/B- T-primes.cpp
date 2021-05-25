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
int ar[N+1];
 void seive()
 {
 
     ar[0]=ar[1]=1;
     for(int i=1;i*i<=N;i++)
     {
         if(ar[i]==0)
         {
             for(int j=i*i;j<=N;j+=i)
             {
                 ar[j]=1;
             }
         }
     }
     
 }






int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   int n;
   cin>>n;
   seive();
  
    while(n--)
    {
        long long a;
        cin>>a;
        long long s=sqrt(a);
        if(s*s==a && ar[s]==0)
        {
            cout<<"YES"<<endl;
        }
         
        else cout<<"NO"<<endl;
    }
   
   
   
   /* TLE
   for(int i=0;i<n;i++)
   {
       long long cnt=0;
       cin>>a[i];
       for(long long j=1;j<=a[i];j++)
       {
           if(a[i]%j==0) cnt++;
       }
       if(cnt==3)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;     
   }  */
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
