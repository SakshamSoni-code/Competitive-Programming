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

int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int temp[n];
   for(int i=0;i<n;i++)
   {
       temp[i]=a[i];
   }
   sort(temp,temp+n);
   int freq[4]={0};
   freq[0]=INT_MAX;
   for(int i=0;i<n;i++)
   {
       if(temp[i]==1)
       {
           freq[1]++;
       }
      if(temp[i]==2)
       {
           freq[2]++;
       }
     if(temp[i]==3)
       {
           freq[3]++;
       }
   }
   int noOfTeams=*min_element(freq,freq+4);
   cout<<noOfTeams<<endl;
    while(noOfTeams)
    {
        int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1 && c1==0)
            {
                cout<<i+1<<" ";
                c1++;
                a[i]=-1;
                continue;
            }
            if(a[i]==2 && c2==0)
            {
                cout<<i+1<<" ";
                c2++;
                a[i]=-1;
                continue;
            }
            if(a[i]==3 && c3==0)
            {
                cout<<i+1<<" ";
                c3++;
                a[i]=-1;
                continue;
            }
        }
        cout<<endl;
        noOfTeams--;
    }
   
}