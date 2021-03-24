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

bool isPrime(int n)
{
    if(n==1) 
    return false;
    for(int i=2;i*i<=n;i++)
    {
       if(n%i==0)
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
    int L,R;
    cin>>L>>R;
    for(;L<=R;L++){
        if(isPrime(L))
        cout<<L<<" ";
    }
}
