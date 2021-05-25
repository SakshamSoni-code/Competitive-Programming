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
 
vi primes;
bool ar[90000001];
 
void seive()
{
    int maxN=90000000;
    ar[0]=ar[1]=true; // 0 and 1 are not prime so indicating true
    for(int i=2;i*i<=maxN;i++)
    {
        if(!ar[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
            {
                ar[j]=true;
            }
        }
    }
    for(int i=2;i<=maxN;i++)
    {
        if(!ar[i])
        primes.push_back(i);
    }
}
 
int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   
   int q,n;
   cin>>q;
   seive();
   while(q--)
   {
       cin>>n;
       cout<<primes[n-1]<<endl;
   }
   
} 