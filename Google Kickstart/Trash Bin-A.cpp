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
void problem_solver(ll counts)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(count(s.begin(),s.end(),'0')==0){
        cout<<"Case #"<<counts<<":"<<" "<<0<<endl;
        return;
    }
    vector<pair<bool,ll>> v1(n);
    vector<pair<bool,ll>> v2(n);
    ll one_index=-1;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            v1[i].first=true;
            v1[i].second=i;
            one_index=i;
        }
        else{
            if(one_index==-1){
                v1[i].first=false;
                v1[i].second=-1;
            }
            else{
                v1[i].first=true;
                v1[i].second=one_index;
            }
        }
    }
    //cout<<v1[0].first<<" "<<v1[0].second<<endl;
    //cout<<v1[3].first<<" "<<v1[3].second<<endl;
    
    ll two_index=-1;
    
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='1'){
            v2[i].first=true;
            v2[i].second=i;
            two_index=i;
        }
        else{
            if(two_index==-1){
                v2[i].first=false;
                v2[i].second=-1;
            }
            else{
                v2[i].first=true;
                v2[i].second=two_index;
            }
        }
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(v1[i].first==true && v2[i].first==true){
            if(abs(i-v1[i].second)<abs(i-v2[i].second)) sum+=abs(i-v1[i].second);
            else sum+=abs(i-v2[i].second);
        }
        else{
            if(v1[i].first==true) sum+=abs(i-v1[i].second);
            else sum+=abs(i-v2[i].second);
        }
    }
    cout<<"Case #"<<counts<<":"<<" "<<sum<<endl;
    
    
}

int32_t main() {
    
    fast;
    ll t;
    cin>>t;
    ll counts=1;
    while(t--)
    {
        problem_solver(counts);
        counts++;
    }


  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
