/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/*---------------------------------*//******GIVE YOUR BEST AND FORGET THE REST*****/



#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int> 
#define vii vector<ii>
//#define ll long long
#define lli long long int

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   
   int n,m;
   cin>>n>>m;
   pair<string,string> arr[m];
   
   for(int i=0;i<m;i++)
   {
       cin>>arr[i].first;
       cin>>arr[i].second;
   }
   string s[n];
   for(int i=0;i<n;i++)
   {
       cin>>s[i];
   }
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(arr[j].first==s[i] || arr[j].second==s[i])
           {
               if(arr[j].first.length()<arr[j].second.length() || arr[j].first.length()==arr[j].second.length()) cout<<arr[j].first<<" ";
               else cout<<arr[j].second<<" ";
               break;
           }
       }
   }
   
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
