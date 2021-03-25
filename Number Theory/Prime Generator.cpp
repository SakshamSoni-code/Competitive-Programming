//SPOJ submission 27602282 (CPP14) plaintext list. Status: AC, problem PRIME1, contest SPOJ. By saksham_6386 (Saksham Soni), 2021-03-25 07:00:13.
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
 
bool isPrime(lli L)
{
    if(L==1)return false;
 
    for(int i=2;i*i<=L;i++)
    {
        if(L%i==0)
        {
            return false;
        }
    }
    return true;
}
 
int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   int t;
   lli L,R;
   cin>>t;
   while(t--)
   {
       cin>>L>>R;
       for(;L<=R;L++)
       {
           if(isPrime(L))
           {
               cout<<L<<endl;
           }
       }
       cout<<endl;
   }
} 