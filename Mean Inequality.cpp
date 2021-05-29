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


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
   
    int t;
    cin>>t;
    
    int n;
    while(t--)
    {
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+2*n);
       // cout<<arr[2*n-1]<<endl;
        
        int i=0,j=2*n-1;
         while(i<j)
         {
             cout<<arr[i]<<" "<<arr[j]<<" ";
             i++;
             j--;
         }
         cout<<endl;
    }
 
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
