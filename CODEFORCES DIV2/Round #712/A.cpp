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

bool palindrome(string s)
{
    int st=0,e=s.length()-1;
    while(st<e)
    {
        if(s[st]==s[e])
        {
            st++;
            e--;
        }
        else
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
   int t;
   cin>>t;
   string s;
   while(t--)
   {
       cin>>s;
      bool b= palindrome("a"+s);
      if(b==false)
      {
          cout<<"YES"<<endl;
          cout<<"a"+s<<endl;
      }
       if(b==true)
       {
           bool b2=palindrome(s+"a");
           if(b2==false)
           {
                cout<<"YES"<<endl;
                cout<<s+"a"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
           
       }
       
   }
}