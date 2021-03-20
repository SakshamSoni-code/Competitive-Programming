#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    if((m<=n && m%2==0) || (n<=m && n%2==0))
    cout<<"Malika"<<endl;
    else
    cout<<"Akshat"<<endl;
    
    return 0;
}