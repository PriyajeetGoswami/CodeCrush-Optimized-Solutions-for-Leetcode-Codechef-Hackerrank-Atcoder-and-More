// https://www.codechef.com/viewsolution/64850495

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
       ll s;
       cin >> s ;
       vector<ll> q;
       ll sum=0;
       for(int i=0;i<s;i++)
       {
           ll intro;
           cin >> intro;
           q.push_back(intro);
       }
       ll e[s];
       for(int i=0;i<s;i++)
       {
           cin >> e[i];
           for(int j=0;j<e[i];j++)
           {
               ll len;
               cin >> len ;
               sum+=len;
           }
       }
       for(int i=0;i<s;i++)
       {
           sum-=q[i]*(e[i]-1);
       }
       cout << sum << "\n";
    }
  return 0;
}