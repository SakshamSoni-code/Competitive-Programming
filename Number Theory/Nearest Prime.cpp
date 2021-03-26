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
bool ar[N+1];
 void seive()
 {
 
     ar[0]=ar[1]=true;
     for(int i=1;i*i<=N;i++)
     {
         if(ar[i]==false)
         {
             for(int j=i*i;j<=N;j+=i)
             {
                 ar[j]=true;
             }
         }
     }
     
 }
 /*
 bool isPrime(lli n)
 {
     if(n==1) return false;
     for(lli i=2;i*i<=n;i++)
     {
         if(n%i==0)
         {
             return false;
         }
     }
     return true;
 }
 */
int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   //seive();
   seive();
   lli t;
   cin>>t;
   lli x;
   while(t--)
   {
       cin>>x;
       if(ar[x]==false)
       {
           cout<<x<<"\n";
           continue;
       }
       lli countR=0,countL=0;
       lli temp=x;
       while(1)
       {
           temp++;
           countR++;
           if(ar[temp]==false)
           {
               break;
           }
       }
       while(1)
       {
           x--;
           countL++;
           if(ar[x]==false)
           {
               break;
           }
       }
       if(countR<countL)
       cout<<temp<<"\n";
       else
       cout<<x<<"\n";
   }
}  