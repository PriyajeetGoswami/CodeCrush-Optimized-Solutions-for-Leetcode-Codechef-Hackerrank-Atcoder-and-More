// https://www.codechef.com/viewsolution/64859321

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using ll = long long;

int main ()
{
  fastio;
  ll t;
  cin >> t;
  while (t--)
    {
        int n,k,d,p;
        cin >> n >> k ;
        
        d = ceil(float(n)/k);
        
        if(n%k==0)
        {
            p=k;
        }
        else
        {
            p=n-(k*(n/k));
        }
        cout << d << " "<< p << "\n" ;
    }
  return 0;
}