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
const int N=1e8;
bool ar[N+1];
vector<int> primes;
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
     for(int i=2;i<=N;i++)
     {
         if(ar[i]==false)
         {
             primes.push_back(i);
         }
     }
 }
 
int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   seive();
   for(int i=1;i<primes.size();i+=100)
   {
       cout<<primes[i-1]<<endl;
   }
} 