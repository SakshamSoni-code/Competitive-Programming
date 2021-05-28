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

const int N=1e5;
bool ar[N+1];
 
void seive()
{
    ar[0]=ar[1]=true; // 0 and 1 are not prime so indicating true
    for(int i=2;i*i<=N;i++)
    {
        if(!ar[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                ar[j]=true;
            }
        }
    }

}
bool fun(string s)
{
    if(s.length()==1) return false;
		 
        unordered_map<char,int> m;
        bool b=true;
        for(char c: s)
        {
            m[c]++;
        }
        if(ar[m.size()]==false)
        {
            for(auto p:m)
            {
                if(ar[p.second]==true){
                    return false;
                    b=false;
                }
            }
            if(b==true)
            {
                return true;
            }
        }
        else
        {
            return false;
        }
  }
int main()
{
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin>>T;
    seive();

    string s;
    while(T--)
    {
        cin>>s;
        bool ans=fun(s);
        
        if(ans==false) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
     return 0;   
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
