/*
Input
The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

Output
For each test case output in a separate line, "yes" if the number is prime else "no."

Constraints
1 ≤ T ≤ 20
1 ≤ N ≤ 100000
Input:
5
23
13
20
1000
99991

Output:
yes
yes
no
no
yes
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   if(n==1) return false;
   for(int i=2;i*i<=n;i++)
   {
     if(n%i==0)
     {
       return false;
     }
   }
   return true;
}
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    if(isPrime(n))
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  }
  return 0;
}
