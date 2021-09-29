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

void problem_solver()
{
    ll n;
    cin>>n;
    
    ll a[n];
    
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll temp[n]={0};
    ll times;
    ll j;
    if(n%2!=0) {
        times=n/2;
        cout<<times<<endl;
         j=1;
        for(ll i=0;i<times;i++){
            temp[j]=a[i];
            j+=2;
        }
        j=0;
        for(ll i=times;i<n;i++){
            if(temp[j]==0){
                temp[j]=a[i];
            }
            else{
                i--;
            }
            j++;
        }
    }
    else {
        j=1;
        times=(n/2)-1;
        cout<<times<<endl;
        for(ll i=0;i<=times;i++){
            temp[j]=a[i];
            j+=2;
        }
        j=0;
        
        for(ll i= times+1;i<n;i++){
            if(temp[j]==0){
                temp[j]=a[i];
            }
            else{
                i--;
            }
            j++;
        }
    }
    
    for(ll i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    //{
        problem_solver();
   // }


  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
