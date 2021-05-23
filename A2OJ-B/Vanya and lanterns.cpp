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




int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   long long n,l;
   cin>>n>>l;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   
   sort(arr,arr+n);
   long long maxi=max(arr[0],l-arr[n-1])*2;
   //long long maxj=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        maxi=max(maxi,arr[i+1]-arr[i]);
    }

    printf("%lf",maxi/2.0);
       
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
