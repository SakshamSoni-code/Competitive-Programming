/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/*---------------------------------*//******GIVE YOUR BEST AND FORGET THE REST*****/



//----------SAKSHAM SONI---------
#include<bits/stdc++.h>


#define fast       ios::sync_with_stdio(0); cin.tie(0)
#define testcase    ll t;cin>>t;while(t--)
#define fw(i,a,b)   for(int i=a;i<b;i++)
#define fw1(i,a,b)  for(int i=a;i<=b;i++)
#define bw(i,a,b)   for(i=a;i>b;i--)
#define bw1(i,a,b)  for(i=a;i>=b;i--)
#define pb          push_back
#define vec         vector<ll>
#define pll       pair<ll,ll>
#define mll         map<ll,ll>
#define F           first
#define S           second
#define lcm(a,b)    (a*b)/(__gcd(a,b))
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define prt(x)      cout<<x
#define prts(x)     cout<<x<<" "
#define prtl(x)     cout<<x<<endl
#define prtnl()     cout<<"\n"
#define endl        "\n"
#define ll long long
#define check       cout<<checkedDude<<endl

const ll mod = 1000000007; //10^9+7

using namespace std;

/*
int gcdx( ll a, ll b)
         {
          if(b==0)return a%b;
          else return gcdx(b,a%b);
         }
*/
void problem_solver()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    
    for(ll i=0;i<n;i++) cin>>v[i];
    
    sort(v.begin(),v.end());
    ll diff=INT_MAX;
    ll i1,i2;
    for(ll i=1;i<n;i++)
    {
        if(v[i]-v[i-1]<diff)
        {
            diff=v[i]-v[i-1];
            i1=i-1;
            i2=i;
        }
    }
    vector<ll> temp(n);
    temp[0]=v[i1];
    temp[n-1]=v[i2];
    ll index=1;
    for(ll i=i2+1;i<n;i++)
    {
        temp[index]=v[i];
        index++;
    }
    index=n-2;
    for(ll i=i1-1;i>=0;i--)
    {
        temp[index]=v[i];
        index--;
    }
    for(ll i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
   
}

int32_t main() {
    
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        problem_solver();
    }


  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
