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
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(ll i=1;i<n;i++)
    {
        if((v[i-1].second+1)!=v[i].second)ans++;
    }
    if(ans<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    /*ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<ll> temp=v;
    sort(temp.begin(),temp.end());
    map<ll,ll> m;
    
    for(ll i=0;i<n;i++)
    {
        m[temp[i]]=i+1;
    }
    vector<pair<ll,ll>> v2;
    for(ll i=0;i<n;i++)
    {
        v2.push_back(make_pair(v[i],m[v[i]]));
    }
    ll ans=1;
    for(ll i=1;i<n;i++)
    {
        if((v2[i-1].second+1)!=v2[i].second) ans++;
    }
    if(ans<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;   */
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
